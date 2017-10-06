#include <iostream>

using namespace std;

float calc_sum(int i, int n)
{
 float sum=0;
 if(i<=n)
        sum = i + calc_sum(++i, n);
 return sum; 
 
}

int main()
{
 int number =1;
 float sum =0;
 cout << "\nProgram to find sum of all natural numbers between 1 to n using recursion.";
 cout << "\nEnter n :";
 cin >> number;
 sum = calc_sum(1,number);
 cout << "\nThe sum from 1 to n is :"<< sum << endl;
 return 0;
}
