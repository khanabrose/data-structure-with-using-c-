/*     ackerman  function 
 A(m,n)= {    n+1    if m=o
                A(m-1,1)     if m>0    n=0
                 A(m-1) A(m-1,n)    if m>0    n>0
             }
             */
#include<stdio.h>
int ack(int m,int n)  //here the function will start  and goes to if then it will compare 
{
	if(m==0)        // here it will compare the value of m to (m==0) if it is true the it will return n value and add 1    (n+1)
	{
		return n+1;
	}
	else if(m>0 && n==0)  //here it will compare the value of m to (m>0) or n (n==0) if it is true the it will return ackerman m-1,1
	{
		return ack(m-1,1);
	}
	else if (m>0 && n>0) //here it will compare the value of m to (m>0) or n (n>0) if it is true the it will return ackerman m-1,ack m-1,n
	{
		return ack(m-1,ack (m-1,n));
		
	}
}
int main()       // program wiil start from here
{                                                 
	int m,n;    ///integer  type value for M and N 
	printf("enter the m and n number : ");           //it will print in screeen to enter a number for M and N
	scanf("%d%d",&m,&n);                                            // here we will take  input from user
	printf("the acker man function of m and n is %d",ack(m,n));    //here we call the function and print the value of ackerman function
return 0;
}
