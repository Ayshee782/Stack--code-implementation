#include <stdio.h>
#define size 3
int stack[size];
int top=-1;
void push (int x)
{
    if(top<size-1)
    {
        top+=1;
        stack[top]=x;
        printf("enter the eliment=%d\n",x);
    }
    else
    {
        printf("no speach!");
    }

}
int pop()
{
    if(top>=0)
    {
        int value = stack[top];
        top-=1;
        return value;}
        printf("empty stack\n");
        return -1;

}
int peek()
{
    if(top>=0)
    {
        return stack[top];
    }
    printf("empty stack");
    return -1;
}
int main()
{
    printf("implimenting the stack\n\n");
    push(3);
    peek();
    printf("peek the eliment=%d\n\n",peek());
    push(4);push(24);
    printf("peek the eliment=%d\n\n",peek());
    printf("pop the eliment =%d\n\n",pop());
    push(67);
    printf("peek the eliment=%d\n\n",peek());

}
