package pack2;

import pack1.Student;

class ExampleSamePackage {
    public static void main(String args[]){
    Student obj = new Student();
    obj.setName("Pradeep Kumar ");
    obj.setRollNo(2136208512432433l);
    System.out.println("Name = "+obj.showName());
    System.out.println("Roll Number = "+obj.showRollNo());
    
    }
}
