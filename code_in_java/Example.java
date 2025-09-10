package pack2;

import pack1.Student;

public class Example
{
    public static void main(String args[])
    {
        Student obj = new Student();
        obj.setName("Pradeep Kumar Tiwari");
        obj.setRollNo(2140906717);
        System.out.println("Name = \t"+obj.showName());
        System.out.println("Roll no. = \t"+obj.showRollNo());
       
    }
}