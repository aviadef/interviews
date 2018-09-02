#include <stdio.h>
#include <stdlib.h>


typedef struct t_node
{
	int data;
	struct t_node * next;
} node, * pNode ;



node * createNodeAtBegining(int num, node * head)
{
	node * myNode;
	myNode = (node *) malloc(sizeof(node));
	myNode->data = num;
	myNode->next = head;

	return myNode;
}

node * createNodeAtEnd(int num, node * head)
{
	node * myNode,  * curr = head;

	myNode = (node *) malloc(sizeof(node));
	myNode->data = num;
	myNode->next = NULL;

	while(curr->next!=NULL)
	{
		curr = curr->next;
	}
	curr->next = myNode;

	return head;
}

node * deleteList(node * head)
{
	node * curr, * next;
	
	curr = head;
	next = head->next;

	while (curr->next != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;		
	}

}


int main(int argc, char ** argv)
{
	node * head = NULL;
	
	
	head = createNodeAtBegining(1, head);
	head = createNodeAtBegining(2, head);
	head = createNodeAtBegining(3, head);

	head = createNodeAtEnd(10, head);
	head = createNodeAtEnd(20, head);
	head = createNodeAtEnd(30, head);

	deleteList(head);
		
}

