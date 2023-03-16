#include <stdio.h>

#define MaxSize 10

typedef int Elemtype;

typedef struct {
	Elemtype data[MaxSize];
	int front, rear;
}SqQueue;

void InitQueue(SqQueue &Q)
{
	Q.rear = Q.front=0;
}

bool isEmpty(SqQueue Q)
{
	return Q.front == Q.rear;
}

bool EnQueue(SqQueue &Q, Elemtype e)
{
	if ((Q.rear+1) % MaxSize == Q.front)
	{
		return false;
	}
	Q.data[Q.rear] = e;
	Q.rear = (Q.rear+1) % MaxSize;
	return true;
}

bool DeQueue(SqQueue &Q, Elemtype &e)
{
	if (Q.front == Q.rear)
	{
		return false;
	}
	e = Q.data[Q.front];
	Q.front = (Q.front+1) % MaxSize;
	return true;
}

int main()
{
	printf("SqQueue\n");
}
