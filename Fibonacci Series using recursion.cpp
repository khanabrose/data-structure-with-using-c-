//write a program to generated n terms of Fibonacci Series using recursion.

#include<stdio.h>
int fab(int i)
{
int x,y;
 if(i<=1)
return i;
x=fab(i-1); 
y=fab(1-2);
return x+y;
}
int main()
 {
int n;
printf("enter the number");
scanf("%d", &n);
printf("Fibonacci Series is :  ");
for (int i=0;i<=n;i++) 
{
printf("%d", fab(i));
}
return 0;
}
