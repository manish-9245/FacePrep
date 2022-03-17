#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node *top=NULL;
int push(int data)
{
struct node*temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=top;
top=temp;
}
int pop()
{
struct node *temp;
temp=top;
if(top==NULL)
{
printf("Stack is empty");
}
else
{
printf("The popped element is %d",top->data);
top=top->next;
}
}
int display()
{
struct node *temp;
temp=top;
printf("The contents of the stack are ");
if(temp==NULL)
{
printf("{}");
}
else
{
while(temp!=NULL)

{
printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}
}
int main()
{
int data,choice,size,csize=0;
printf("Enter the maximum size of the stack\n");
scanf("%d",&size);
do{
printf("\nChoice 1 : Push \nChoice 2 : Pop \nChoice 3 : Display");
printf("\n Any other choice : Exit");
printf("\n Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(csize<size)
{
printf("Enter the element to be pushed\n");
scanf("%d",&data);
push(data);
csize++;
}
else
{
printf("Stack is full\n");
}
break;
case 2:
pop();
csize--;
break;
case 3:
display();
break;
}
}while((choice>=1)&&(choice<=3));
return 0;
}