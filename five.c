#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*head;
void append(int d)
{
struct node*newnode,*temp;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=d;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
}
}
void display()
{
struct node*temp=head;
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
}
int main()
{
int d;
do
{
scanf("%d",&d);
if(d>0)
{
append(d);
}
}while(d>-1);
display();
return 0;
}