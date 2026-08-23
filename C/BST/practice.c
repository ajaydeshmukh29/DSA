#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
  int data;
  struct node* lchild;
  struct node* rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Inorder(PNODE first)
{
  if(first != NULL)
  {
  Inorder(first->lchild);
  printf("%d\n",first->data);
  Inorder(first->rchild);
  }
}

void Inser(PPNODE first, int iNo)
{
  PNODE newn = NULL;
  PNODE temp = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = iNo;
  newn->lchild = NULL;
  newn->rchild = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else 
  {
    temp = *first;

    while(*first != NULL)
    {
      if(iNo > temp->data)
      {
        temp = newn->rchild;
        break;
      }
      else if(iNo < temp->data)
      {
        temp = newn->lchild;
        break;
      }
      else if(iNo == temp->data)
      {
        printf("Elemente is duplicte\n");
        free(newn);
        break;
      }
    }
  }
}

int main()
{
  PNODE head = NULL;

  Inser(&head,4);
  Inser(&head,3);
  Inser(&head,2);
  Inser(&head,1);

  printf("Inorder : ");
  Inorder(head);


  return 0;
}
