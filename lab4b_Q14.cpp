#include<iostream>

using namespace std;

int sum_elements(int ar[], int len, int i =0)
{
 int sum =0; 
 if(i<len)
 sum += ar[i] + sum_elements(ar, len, ++i);
  
 return sum;
}


int main()
{
 int n, sum, ar[20];
 cout << "\nProgram to find sum of elements of array using recursion.";
 cout << "\nEnter the number of elements in the array :";
 cin >> n;

 for(int i =0; i<n; ++i)
 {
  cout << "\nEnter the "<<i<<"th element :"; cin >> ar[i];
 }
 sum = sum_elements(ar, n);
 cout << "\nSum of the elements of array is :"<< sum << endl;
 return 0;
}
 
