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
 cout << "\nProgram to find reverse of any number using recursion.";
 cout << "\nEnter the number :";
 cin >> n;
 
 new_number = reversal(0,n);
 cout << "\nthe reversed number is :"<<new_number << endl;
 return 0;
}

 
