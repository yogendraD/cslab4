#include<iostream>

using namespace std;

void print_numbers(int n, int i=1)
{ 
  if(i<=n) 
  {
   cout<<" \n"<<i;
   ++i;
   print_numbers(n,i);
  }
}
 

int main()
{
 int number;

 cout << "\nProgram to print all natural numbers between 1 to n using recursion.";
 cout << "\nEnter n :";
 cin >> number;
 print_numbers(number);
 cout << endl;
 return 0;
}
