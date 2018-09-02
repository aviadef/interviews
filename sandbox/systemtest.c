#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(char * string)
{
	char * start = string;
	char * end;
	char buff;

	end  = (start + strlen(string))-1;

	while (end > start)
	{
		buff   = *start;
		*start = *end;
		*end   = buff;

		++start;
		--end;
	}
}
int main(int argc,  char **argv)
{
	char string[30] = "abcdddddddddddddd";
	int a[5][5];
	int i, j;


	for (i = 0; i < 5; i++)
	{
		for (j=0;j<5;j++)
		{
			a[i][j] = (i*5)+(j+1);
		}
	}



	printf("order: %s\n",string);
	reverse(string);
	printf("reverse: %s\n",string);	

	system("sleep 5");
}

