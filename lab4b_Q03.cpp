#include<iostream>

using namespace std;

void print_odd(int L, int U)
{
  if(L<=U)
   { 
         cout <<" \n"<< L;
         L+=2;
         print_odd(L,U);
   }
    
}


void print_even(int L, int U)
{
    if(L<=U)
      {
         cout <<" \n"<< L;
         L+=2;
         print_even(L,U);
      }
}


int main()
{
 int choice, ll, ul;
 cout << "\nProgram to print all even or odd numbers in given range using recursion.";
 cout << "\nEnter the range :\nLower limit :";       cin >> ll;
 cout << "\nUpper limit :";                          cin >> ul;

 cout << "\nEnter your choice :\n1.Print odd numbers.\n2.Print even numbers.\n";
 cin >> choice;
 switch(choice)
 {
  case 1 : if(ll%2!=0)
           print_odd(ll,ul);
           else 
           print_odd(++ll,ul);
           break;

  case 2 : if(ll%2==0)
           print_even(ll,ul);
           else 
           print_even(++ll,ul);
           break;
 
  default : cerr << "\nWrong choice !! ";
 }
 cout << endl;
 return 0;
}
  

