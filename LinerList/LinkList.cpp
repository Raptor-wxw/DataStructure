#include <stdio.h>
#include <stdbool.h>
#include <cstdlib>

typedef int Elemtype;

typedef struct LNode{
	Elemtype data;
	struct LNode *next;
}LNode, *LinkList;

LinkList List_HeadInsert(LinkList &L)
{
	LNode *s;
	Elemtype e;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &e);
	while(e != 9999) {
		s = (LNode *)malloc(sizeof(LNode));
		s->next = L->next;
		s->data = e;
		L->next = s;
		scanf("%d", &e);
	}
	return L;
}

LinkList List_TailInert(LinkList &L)
{
	LNode *s, *r=L;
	Elemtype e;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &e);
	while(e != 9999) {
		s = (LNode *)malloc(sizeof(LNode));
		r->next = s;
		s->data = e;
		r = s;
		scanf("%d", &e);
	}
	s->next = NULL;
	return L;
}

LNode *GetElem(LinkList L, int i)
{
	if (i < 1)
	{
		return NULL;
	}
	LNode *p = L->next;
	while (p!=NULL && i > 1) {
		p = p->next;
		i--;
	}
	return p;
}

LNode *LocateElem(LinkList L, Elemtype e)
{
	LNode *p = L->next;
	while(p != NULL && p->data != e) {
		p = p->next;
	}
	return NULL;
}

int main()
{
	printf("LinkList\n");
}