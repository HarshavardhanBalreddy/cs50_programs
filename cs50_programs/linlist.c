//linkedlist

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int number;
	struct node *next;
}node;

node *list=NULL;
node *n= malloc(sizeof(node));
n->number=1;
n->next=NULL;
list=n;

n=malloc(sizeof(node));
n->number=2;
n->next=n;

