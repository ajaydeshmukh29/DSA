#include<iostream>
using namespace std;

#pragma pack(1)
struct node 
{
  int data;
  struct node* next;
};

class Stack
{
  private:
  struct node* first;
  int iCount = 0;

  public:
  Stack();
  void Push(int iNo);
  int Pop();
  int Count();
  int Peep();
  void Display();
};

Stack :: Stack()
{
  struct node* first = NULL;
  int iCount = 0;
}

void Stack :: Push(int iNo)
{
  struct node* newn = NULL;
  
  newn->data = iNo;
  newn->next = NULL;

  newn->next = first;
  first = newn;

}

int Stack :: Pop()
{
  int iValue = 0;

  struct node *temp = NULL;

  if(first == NULL)
  {
    cout<<"Stack is empty\n";
    return -1;
  }

  temp = first;
  iValue = first->data;

  first = first->next;

  delete temp;

  iCount--;

  return iValue;
}

int Stack :: Count()
{}

int Stack :: Peep()
{}

void Stack :: Display()
{}

int main()
{
  Stack sobj;
  int iRet = 0;

  sobj.Push(51);
  sobj.Push(21);
  sobj.Push(11);

 iRet = sobj.Pop();
  

  return 0;
}