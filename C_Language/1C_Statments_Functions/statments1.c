#include<stdio.h>  
int a; 
int a = 10;
int  main ()  
{  
	extern int a;
	printf("%d\n", a);
	return 0;
}  int a =1;