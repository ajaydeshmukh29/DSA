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
  {
    node temp = first;

    while(temp != null)
    {
      System.out.print("| "+temp.data+" | -> ");
      temp = temp.next;
    }
    System.out.println("null");
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
  {
    node newn = new node(iNo);

    if(first == null)
    {
      first = newn;
    }
    else
    {
     node temp = first;

     while(temp.next != null)
     {
        temp = temp.next;
     }
     temp.next = newn;
    }
    iCount++;
  }

}
public class SinglyLL_Display 
{
  public static void main(String A[])
  {
    SinglyLL sobj = new SinglyLL();

    sobj.InsertFirst(30);
    sobj.InsertFirst(20);
    sobj.InsertFirst(10);

    sobj.InsertLast(40);
    sobj.InsertLast(50);
    sobj.InsertLast(60);

    sobj.Display();
  }
  
}
