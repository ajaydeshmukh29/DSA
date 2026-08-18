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

  public void Display()
  {
    node temp = first;

    while(temp != null)
    {
      System.out.print("| "+temp.data+" | -> ");
      temp = temp.next;
    }
    System.out.println("null");
  }

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

    }
  }

  public void InsertLast(int iNo)
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

  public void InsertAtPos(int iNo, int iPos)
  {}

  public void DeleteFirst()
  {}

}

public class SinglyLL_DeleteFirst 
{
  public static void main(String A[])
  {

    SinglyLL sobj = new SinglyLL();

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
  }
  
}
