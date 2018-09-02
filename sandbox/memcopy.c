#include <stdio.h>

#define UINT unsigned int
#define UCHAR unsigned char


int memcopy(const void * src, const void * dst, int size)
{
	unsigned char * my_src;
	unsigned char * my_dst;
	int i;


	my_src = src;
	my_dst = dst;
	
	 //src < dst < src+size
	if (((UINT)src + size > (UINT)dst) && ( (UINT)src < (UINT)dst))
	{
		printf("copy backwards");
		for (i = 0;i<size; i++ )
		{
			my_src += size;
			my_dst += size;
			*my_dst = *my_src;
			my_src--;
			my_dst--;
		}
	}
	// dst <src < dst+size
	else 
	{
		for (i = 0; i<size; i++ )
		{
			*my_dst = *my_src;
			my_src++;
			my_dst++;
		}
	}
   return 0;
} 


int main()
{
 UCHAR * src = NULL;
 UCHAR * dst = NULL;
 int size = 10;
 char string[10] = "0123456789";

 //src = (UCHAR*)(void*) malloc(size);
 dst = (UCHAR*)(void*) malloc(size);

 src = string;
 
 
 printf("src: %s\n",src);
 printf("dst: %s\n",dst);
 memcopy(src,dst,size);
 printf("src: %s\n",src);
 printf("dst: %s\n",dst);

// free(src);
 free(dst);

 return 0;
}