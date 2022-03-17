#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node *front=NULL;
struct node *rear=NULL;
int enque(int d)
{
struct node* new;
new=(struct node*)malloc(sizeof(struct node));
new->data=d;
new->next=NULL;
if((front==NULL)&&(rear==NULL))
{
front=rear=new;
}
else
{
rear->next=new;
rear=new;
}
}
void display()

{
struct node *temp=front;
if(temp==NULL)
{
printf("{}");
}
else
{
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
printf("\n");
}
int main()
{
int c,n;
do
{
scanf("%d",&n);
if(n>-1)
enque(n);
}while(n!=-1);
display();
}