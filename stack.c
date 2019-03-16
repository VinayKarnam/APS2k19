#include<stdio.h>


struct stack
{
    int st[10000];
    int top;
}s;

struct queue
{
    int f;
    int r;
    int q[100000];
}qu;

void enqueue(int num)
{
    qu.r++;
    qu.q[qu.r]=num;
}

int dequeue()
{
    int n=-1;
    if(qu.r>=qu.f)
    {
        n=qu.q[qu.f];
        qu.f++;
    }
    else
    {
        printf("queue is empty\n");
    }
    return n;
}


void push(int n)
{
    s.top++;
    s.st[s.top]=n;
}

int pop()
{
    int n;
    if(s.top>=0)
    {
    n=s.st[s.top];
    s.top--;
    return n;
    }
    else
    {
        printf("stack is empty\n");
        return -1;
    }
    
    
}


int main()
{
    s.top=-1;
    push(2);
    push(3);
    printf("%d\n",pop());
    push(10000);
    push(1000);
    printf("%d\n",pop());
    qu.f=0;
    qu.r=-1;
    printf("queue\n");
    enqueue(10);
    enqueue(11);
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    enqueue(1111);
    printf("%d\n",dequeue());
}