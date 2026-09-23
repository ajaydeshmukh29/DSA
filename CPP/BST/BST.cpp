// BST

#include<iostream>

using namespace std;

struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first , int iNo)
{

  PNODE newn = NULL;
  PNODE temp = NULL;

  newn = new NODE;

  newn->data = iNo;
  newn->next = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    newn-> next = *first;
    *first = newn;
  }
}

void InsertLast(PPNODE first, int iNo)
{
  PNODE newn = NULL;
  PNODE temp = NULL;

  newn = new NODE;

  newn->data = iNo;
  newn->next = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    temp = *first;

    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newn;
  }
}


void Display(PNODE first)
{
  while(first != NULL)
  {
    cout<<"|"<< first->data << "|";
    first = first->next;
  }
  cout<<"NULL"<<endl;
}

int Count(PNODE first)
{
  
}

int main()
{
  PNODE head = NULL;
  int iRet = 0;

  InsertFirst(&head, 11);
  InsertFirst(&head, 21);
  InsertFirst(&head, 51);

  Display(InsertFirst);

  return 0;
}
