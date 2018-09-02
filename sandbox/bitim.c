#include <stdio.h>
#include <stdlib.h>

#define UCHAR unsigned char

int ex_1()
{
	unsigned int N, M;
	UCHAR i, j;
	unsigned int mask;

	N = 0x400;
	M = 0x15;
	i= 2;
	j= 6;

	mask = 1<<j;
	mask = mask-1;
	mask = ~mask;

	mask = mask | ((1<<i) -1);

	N = N&mask;
	M = M <<i;
	N= N|M;	
	return N;
}

int swapOddEven(int n)
{
	unsigned int evenMask = 0x55555555;
	unsigned int oddMask  = evenMask<<1;

	int swappedNum = ((n&evenMask)<<1 )| ((n & oddMask)>>1);
	return swappedNum;
}



int main(int argc , char ** argv )
{
	int num = 5;
	
	printf("regular:%x\n",num);
	num = swapOddEven(num);
	printf("Swaped:%x\n",num);
	
}

