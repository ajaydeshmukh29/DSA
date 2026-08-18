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
  struct node first;
  int data;

  public:
  Stack();
  void Push();
  int Peep();
  int Pop();
  void Display();
};

Stack :: Stack() 
{}

void Stack :: Push()
{}

int Stack :: Peep()
{}

int Pop()
{}

int main()
{

  return 0;
}