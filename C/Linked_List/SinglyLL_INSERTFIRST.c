#include<stdio.h>

#pragma pack(1)
struct node 
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int iNo)
{
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = iNo;
  newn->next = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    newn->next = *first;
    *first = newn;
  }
}
int main()
{
  PNODE head = NULL;

  InsertFirst(&head,101);
  InsertFirst(&head,51);
  InsertFirst(&head,21);
  InsertFirst(&head,11);
  
  return 0;
}