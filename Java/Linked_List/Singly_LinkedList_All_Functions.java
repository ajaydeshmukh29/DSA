package Linked_List;

class node
{
  public int data;
  public node next;

  node(int no)
  {
    this.data = no;
    this.next = null;
  }
}

class SinglyLL 
{
  private node first;
  private int iCount;

  public SinglyLL()
  {
    System.out.println("Inside Consructor");
    this.first = null;
    this.iCount = 0;
  }

  public void Display()
  {}

  public int Count()
  {
    return iCount;
  }

  public void InsertFirst(int iNo)
  {}

  public void InsertLast(int iNo)
  {}

  public void InsertAtPos(int iNo, int iPos)
  {}

  public void DeleteFirst()
  {}

  public void DeleteLast()
  {}

  public void DeleteAtPos(int iPos)
  {}

}




public class Singly_LinkedList_All_Functions
{
  public static void main(String A[])
  {
    SinglyLL sobj = new SinglyLL();
  }
}
