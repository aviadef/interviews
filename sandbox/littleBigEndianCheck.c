#include <stdio.h>


int littleOrBig(void)
{
	unsigned int number = 0;
	unsigned int *pNumber = NULL;

	unsigned char buff[4] = {0};

	buff[0] = 0xA;
	buff[1] = 0xB;
	buff[2] = 0xC;
	buff[3] = 0xD;

    pNumber = (unsigned int*)(void*)&buff[0];

	number = *pNumber;

	printf("%X\n", number);

	return 0;
}


void main(void)
{
	littleOrBig();
}
