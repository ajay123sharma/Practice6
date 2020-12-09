#include<stdio.h>

/*
	////using while loop
	unsigned int factNum(unsigned int n){
	if(n == 0)
		return 1;
	int fact=1, i=1;
	while(i<=n){
		fact = fact*i;
		i++;
	}
	return fact;
}
*/

/*	//using while loop
	unsigned int factNum(unsigned int n){
	if(n == 0)
		return 1;

	int i = n,fact = 1;
	while(n/i != n){
		fact = fact*i;
		i--;
	}
	return fact;
}*/

/*  //using for loop
unsigned int factNum(unsigned int n){
	int i,fact = 1;
	for(i=2;i<=n;i++)
		fact = fact*i;

	return fact;
}*/

/*
unsigned int factNum(unsigned int n)
{

	return (num==0 || n == 1)? 1: n*factNum(n-1);
}
*/

unsigned int factNum(unsigned int n){
	if(n==0)
		return 1;
	return n*factNum(n-1);
}
int main()
{
	int num =0;
	printf("Factorial of %d = %d\n",num, factNum(num) );
}

//O(n) of iterative soln