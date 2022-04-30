#include<stdio.h>
#include<conio.h>
int isprime(int,int);
int main()
{
    int n,p;
    printf("Enter the number:\n");
    scanf("%d",&n);
    {
    	p=isprime(n,n/2);
    	if(p==1)
    	printf("%d is prime number\n",n);
    	else
    	printf("%d is not prime number\n",n);
	}
    return 0;
}
int isprime(int n,int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
		if(n%i==0)
		return 0;
		else
		isprime(n,i-1);
	}
}
