#include <stdio.h>
#include <cstdlib>

typedef int Elemtype;

typedef struct LinkNode{
	Elemtype data;
	struct LinkNode *next;
}LinkNode;

typedef struct {
	LinkNode *front, *rear;
}*LinkQueue;

void InitQueue(LinkQueue &Q)
{
	Q->front = (LinkNode *)malloc(sizeof(LinkNode));
	Q->rear = Q->front;
	Q->front->next = NULL;
}

bool IsEmpty(LinkQueue Q)
{
	return Q->front == Q->rear;
}

void EnQueue(LinkQueue &Q, Elemtype e)
{
	LinkNode *node = (LinkNode *)malloc(sizeof(LinkNode));
	node->data = e;
	node->next = NULL;
	Q->rear->next = node;
	Q->rear = node;
}

bool DeQueue(LinkQueue &Q, Elemtype &e)
{
	if (Q->rear == Q->front)
	{
		return false;
	}
	LinkNode *node = Q->front->next;
	e = node->data;
	Q->front->next = node->next;
	if (Q->rear == node)
	{
		Q->front = Q->rear;
	}
	free(node);
	return true;
}

int main()
{
	printf("LinkQueue\n");
}