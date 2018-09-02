#include <stdio.h>
#include <string.h>

int main()
{
	char string[10] = "1";
	int i, idx, number =0;
	char zero = '0';

	if (strlen(string) >= 1)
	{
		number = (int)(string[0]-zero);    
	}

	for(i = 1; i<strlen(string); i++ )
	{
		number *= 10;
		number += (int)(string[i]-zero);
	}
	printf("atoi: %d \n",number);
	return 0;
}