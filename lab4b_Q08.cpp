#include<iostream>

using namespace std;
 
int sum(int n)
{
  int sumdig =0;
  if(n)
     sumdig += n%10 + sum(n/10);
  return sumdig;
}


int main()
{ 
 int number, sumdig;
 cout << "\nProgram to find sum of digits of a given number using recursion.";
 cout << "\nEnter the number :";
 cin >> number;
 sumdig = sum(number);
 cout << "\nthe sum of all digits of "<< number <<" is :"<<sumdig;
 return 0;
}
 
