#include<iostream>

using namespace std;

int reversal(int newn , int old)
{
   if(old)
  {
    newn = newn*10 + old%10;
    newn = reversal(newn, old/10);
  }

  return newn;
}


int main()
{
 int n, new_number;
 cout << "\nProgram to check whether a number is palindrome or not using recursion.";
 cout << "\nEnter the number :";
 cin >> n;
 new_number = reversal(0,n);
 if(new_number==n)
 cout << "\nThe number is palindrome."<< endl;
 else cout << "\nThe number is not a palindrome."<< endl;
 return 0;
} 
