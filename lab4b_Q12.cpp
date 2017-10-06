#include<iostream>

using namespace std;

int find_gcd(int n1, int n2)
{
 int rem =n1;
   if(n2)
    {
     rem = n1%n2;
     return  find_gcd(n2,rem);
    }
 return rem;
}


int main()
{
 int num1, num2, hcf, lcm;
 
 cout << "\nProgram to find LCM of two numbers using recursion.";
 cout << "\nEnter the numbers :\nFirst number :";
 cin >> num1;
 cout << "\nSecond :";
 cin >> num2;

 if(num1>num2)
 hcf = find_gcd(num1,num2);
 else hcf = find_gcd(num2,num1);
 
 lcm = num1*num2/hcf;
 cout << "\nLCM of the two numbers is :"<< lcm << endl;
 return 0;
}


