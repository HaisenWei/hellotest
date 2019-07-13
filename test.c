#include <stdio.h>
//add to git


int fun(int *p)
{
	*p = 0;	
}
int main()
{
	fun(NULL);
	return 0;
}
