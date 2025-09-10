public class ThreeDimentionArray {
    public static void main(String args[]){
        int arr[][][]  = new int[5][3][4];
        int i,j,k;
        for(i=0;i<arr.length;i++){
            for(j=0;j<arr[i].length;j++){
                for(k=0;k<arr[i][j].length;k++){
                    System.out.print("x\t");
                    
                }
                System.out.println();
            }
            System.out.println();
        }
    }
    
}
