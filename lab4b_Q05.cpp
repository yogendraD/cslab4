#include<iostream>

using namespace std;

float sum_odd(int L, int U)
{
  float sum =0;
  if(L<=U)
      sum = L + sum_odd(L+2,U);
  return sum; 

}


float sum_even(int L, int U)
{  
  float sum =0;
  if(L<=U)
     sum = L + sum_even(L+2,U);
  return sum;
}


int main()
{
 int choice, ll, ul;
 float sum;

 cout << "\nProgram to find sum of all even or odd numbers in given range using recursion.";
 cout << "\nEnter the range :\nLower limit :";       cin >> ll;
 cout << "\nUpper limit :";                          cin >> ul;
 cout << "\nEnter your choice :\n1.Sum of odd numbers.\n2.Sum of even numbers.\n";
 cin >> choice;

 switch(choice)
 {
  case 1 : if(ll%2!=0)
           sum = sum_odd(ll,ul);
           else
           sum = sum_odd(++ll,ul);
           cout << "\nThe sum of all odd numbers between "<<ll<<" and "<<ul<<" is :"<< sum << endl;
           break;

  case 2 : if(ll%2==0)
           sum = sum_even(ll,ul);
           else
           sum = sum_even(++ll,ul);
           cout << "\nThe sum of all even numbers between "<<ll<<" and "<<ul<<" is :"<< sum << endl;
           break;

  default : cerr << "\nWrong choice !! ";
 }

 return 0;
}

