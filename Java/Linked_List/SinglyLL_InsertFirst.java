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
  {
    node newn = new node(iNo);

    if(first == null)
    {
      first = newn;
    }
    else
    {
      newn.next = first;
      first = newn;
    }
    iCount++;
  }

  public void InsertLast(int iNo)
  {}

  public void InsertAtPos(int iNo, int iPos)
  {}

}

public class SinglyLL_InsertFirst 
{
  public static void main(String  A[])
  {
    SinglyLL sobj = new SinglyLL();

    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);
  }
  
}
