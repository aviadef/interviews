#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int foo1(void);
int foo2(int ,int);
int foo3(void);

#define SIZE 8589934592UL


int main(void)
{
	return foo2(0,25);
}


int foo1(void)
{
	size_t * temp = NULL;
	char     a = 0;
	long long int   i = 0;
	
	temp = malloc(SIZE*sizeof(char));
	if (temp == NULL)
	{
		return 1;
	}
	for(i = 0; i<SIZE; i++)
	{
		*(temp+i) = 0xAE;
	}

	//printf("%s",temp);	
	a = getch();
	return 0;
}

int foo2(int i,int j)
{
	for (; i< j ; i++)
	{
		foo2(i+1,j);
	}
	return i;
}

