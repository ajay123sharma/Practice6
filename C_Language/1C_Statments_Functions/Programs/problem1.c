//To find sum of two numbers without using any operator

#include <stdio.h> 

int add(int x, int y) 
{ 

	return printf("%*c%*c", x, '\r',y, '\r');
} 

// Driver code 
int main() 
{ 
	printf("Sum = %d", add(3, 9)); 
	return 0; 
} 

/*
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a=10, b=5;

	if(b>0){
		while(b>0)
		{
			a++;
			b--;
		}
	}
	if(b<0){
		while(b<0)
		{
			a--;
			b++;
		}
	}

	printf("Sum = %d\n", a);

	return 0;
}
*/
