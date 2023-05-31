#include<stdio.h>
int fun(int a);  ///declaration
int main()
{
	int k;
	k=fun(3);
	printf(" %d",k);
}
int fun(int a)  // Function definition
{
	int s;
	if(a==1)
	return(a);
	s=a+fun(a-1);
	return(s);
}

