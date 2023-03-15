#include <stdio.h>
#include <stdbool.h>
#define MaxSize 100
#define InitSize 100

typedef int Elemtype;

typedef struct SqList
{
	Elemtype data[MaxSize];
	int length;	
}SqList;

// typedef struct SeqList
// {
// 	Elemtype *data;
// 	int MaxSize, length;
// }SeqList;


bool ListInsert(SqList &L, int i, Elemtype e)
{
	if (i < 1 || i > L.length + 1)
	{
		return false;
	}
	if (L.length >= MaxSize)
	{
		return false;
	}
	for (int j = L.length; j >= i ; --j)
	{
		L.data[j] = L.data[j-1];
	}
	L.data[i-1] = e;
	L.length++;
	return true;
}

bool LinstDelete(SqList &L, int i, Elemtype &e)
{
	if (i < 1 || i > L.length)
	{
		return false;
	}
	for (int j = i; j < L.length; ++j)
	{
		L.data[j-1] = L.data[j];
	}
	e = L.data[i-1];
	L.length--;
	return true;
}

int LocateElem(SqList L, Elemtype e)
{
	for (int i = 0; i < L.length; ++i)
	{
		if (L.data[i] == e)
		{
			return i+1;
		}
	}
	return 0;
}

int main()
{
	printf("SqList\n");
}