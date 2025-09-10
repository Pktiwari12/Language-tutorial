class Student
{
    private int rollno;
    private String name;
    private int age;
    public Student(String name ,int age, int rollno)
    {
        this.name = name;
        this.rollno = rollno;
        this.age = age;
    }
        public void changeAge(int age)
    {
        this.age = age;
    }
    public void changeRollno(int rollno)
    {
        this.rollno = rollno;
    }
    public void printDetails()
    {
        System.out.println("The name of student :"+this.name);
        System.out.println("The age of student :"+this.age);
        System.out.println("The rollno of student :"+this.rollno);
    }
    public String getName()
    {
      return (this.name);  
    }
    public void changeName(String name)
    {
        this.name = name;
    }

    public int getRollno()
    {
        return(this.rollno);
    }
    public int getage()
    {
        return(this.age);
    }
}

public class ThisExample
{
    public static void main(String args[])
    {
        Student s1 = new Student("Pradeep",18,150337);
        Student s2 = new Student("Sachin ",17,150339);
        s1.printDetails();
        s1.changeName("Devanshu Singhai");
        System.out.println("Name after change of student 1  :"+s1.getName());
        s1.printDetails();
        s2.printDetails();
        s2.changeRollno(150342);
        System.out.println("Roll no. after changed of Student 2 :"+s2.getRollno());
        s2.printDetails();

    }

}