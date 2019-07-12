#include <stdio.h>



int fun(int *p)
{
	*p = 0;	
}
int main()
{
	fun(NULL);
	return 0;
}
