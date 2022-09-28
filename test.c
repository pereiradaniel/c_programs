#include <stdio.h>
int main(int argc, char* argv[])
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	for (int i=0; i < sizeof(a) / sizeof(a[0]); ++i)
		printf("a[%d] = %d\n", i, a[i]);
	return 0;
}
