#include <stdio.h>

#define MaxSize 50

typedef int Elemtype;

typedef struct {
	Elemtype data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack &S)
{
	S.top = -1;
}

bool StackEmpty(SqStack S)
{
	return S.top == -1;
}

bool Push(SqStack &S, Elemtype e)
{
	if (S.top >= MaxSize-1)
	{
		return false;
	}

	S.top++;
	S.data[S.top] = e;
	return true;
}

bool Pop(SqStack &S, Elemtype &e)
{
	if (S.top <= -1)
	{
		return false;
	}

	e = S.data[S.top];
	S.top--;
	return true;
}

bool GetTop(SqStack S, Elemtype &e)
{
	if (S.top <= -1)
	{
		return false;
	}

	e = S.data[S.top];
	return true;
}

int main()
{
	printf("Stack\n");
}