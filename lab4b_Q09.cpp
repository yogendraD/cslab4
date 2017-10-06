#include <iostream>
 
using namespace std;

float calc_factorial(int n)
{
 float factorial =1;
 if(n)
 factorial *= n*( calc_factorial(n-1));
 return factorial;
} 

int main()
{
 int number;
 float fact;
 cout << "\nProgram to find factorial of any number using recursion.";
 cout << "\nEnter the number :";
 cin >> number;
 if(number<0) number*=-1;
 fact = calc_factorial(number);
 cout << "\nThe factorial of "<< number <<" is :"<<fact;
 return 0;
} 
