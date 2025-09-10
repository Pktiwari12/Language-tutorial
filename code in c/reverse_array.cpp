// Array reversing using the for loop by self
#include<iostream>
using namespace std;
int main()
{
	//int arr[] = {3,4,5,6,7};
	int n;
	cout<<"Enter the length of array .";
	cin>>n;
	int i,j;
	int arr[n];
	cout<<"Enter the elements of array.";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	// reversing the array
	//cout<<arr[0];
	for(i=0,j=n-1;i<n&&j>=i;i++,j-- )
	{
		int temp;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for(i=0;i<n;i++)
	/*{
		for(j=n-1;j>i;j--)
		{
			int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}*/
	// Print the reverse array
	 cout <<"Array after  reversing";
	 //cout<<arr[0];						// this print address 
	for( i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
}

