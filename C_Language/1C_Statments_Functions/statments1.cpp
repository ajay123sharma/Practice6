#include<bits/stdc++.h>
using namespace std;
bool checkLeap(int year)
{

	return ( ((year % 4==0) && (year%100 != 0)) || (year%400==0) );
}
  
 

int main() 
{ 
	int year = 2000;
	checkLeap(year)?cout<<"Leap Year":cout<<"Not Leap year";
	return 0; 
} 
