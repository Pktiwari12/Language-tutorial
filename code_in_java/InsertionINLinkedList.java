class LinkedList{
    // blue print of node of linked list
    class Node{
        int data;
        Node next;
        // Constructor to insert user_data into 'data part of node' and assingning null to next
        public Node(int data)
        {
            this.data = data;
            this.next = null;
        }
    }
    Node head;
    // first constructor without data
    public LinkedList()
    {
        this.head = null;
    }
    // Second Constructor with data
    public LinkedList(int data)
    {
        Node new_node = new Node(data);
        this.head = new_node;
    }
    // function to insert the data at the end of the linked list
    public void insert_at_end(int data)
    {
        Node new_node = new Node(data);

        if(this.head == null)
        {
            this.head = new_node;
        }
        else{
            Node temp = this.head;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = new_node;
        }
    }
    public void display()
    {
        Node temp = this.head;
        while(temp != null)
        {
            System.out.print(""+temp.data);
            System.out.print("\t");
            temp = temp.next;
        }
    }
}
public class InsertionINLinkedList {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        // System.out.println(""+list.head.next);
        list.insert_at_end(47);
        list.insert_at_end(56);
        list.display();

    }
    

}
