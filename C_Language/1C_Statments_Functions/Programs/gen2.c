#include<stdio.h>



/*void Fibo(int n){
	int a=-1,b=1,c,i;
	for(i=1;i<=n;i++){
		c = a+b;
		a = b;
		b = c;
		printf("%d\n", c);
	}
}*/

/* using recurssion
int main(){
	int n,c=0,i;
	int Fibo(int);
	printf("Enter the nth number");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	printf("%d\n", Fibo(c));
	c++;
}
	return 0;
}

int Fibo(int n) //using recurssion
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;

	return Fibo(n-1)+Fibo(n-2);
}*/
/*  
	//Time Complexity: T(n) = T(n-1) + T(n-2) which is exponential. bad
	// Extra Space: O(n) if we consider the function call stack size, otherwise O(1).

int fib(int n){
	if(n <=1)
		return n;
	return fib(n-1)+fib(n-2);
}

int main () 
{ 
  int n = 9; 
  printf("%d\n", fib(n)); 
   
  return 0; 
} */

/*

//Fibonacci Series using Dynamic Programming : We can avoid the repeated work done
#include<stdio.h> 

int fib(int n) 
{ 
// Declare an array to store Fibonacci numbers. 
int f[n+2]; // 1 extra to handle case, n = 0 
int i; 

 0th and 1st number of the series are 0 and 1
f[0] = 0; 
f[1] = 1; 

for (i = 2; i <= n; i++) 
{ 
	// Add the previous 2 numbers in the series 
	//	and store it //
	f[i] = f[i-1] + f[i-2]; 
} 

return f[n]; 
} 

int main () 
{ 
int n = 2; 
printf("%d", fib(n)); 
getchar(); 
return 0; 
} 

*/




Time Complexity:O(n)
Extra Space: O(1)

int main(){
	int n=8,a=0,b=1,c,i;
	printf("Enter the nth number");
	//scanf("%d",&n);

	for(i=0;i<n;i++){
		
		if(i == 0)
			c = i;
		else
	{
		c = a+b;
		a = b;
		b = c;

	}
	printf("%d\n",c );
	}

	return 0;
}