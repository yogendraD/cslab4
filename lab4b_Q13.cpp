#include <iostream>

using namespace std;

void display(int ar[], int len, int i =0)
{
 if(i<len)
  { 
   cout << ar[i] << '\t';
   display(ar, len, ++i);
  }
} 

int main()
{
 int n, ar[20];
 cout << "\nProgram to display all array elements using recursion.";
 cout << "\nEnter the number of elements in the array :";
 cin >> n;
 
 for(int i =0; i<n; ++i)
 { 
  cout << "\nEnter the "<<i<<"th element :"; cin >> ar[i];
 }
 cout << "\nthe array elements are :\n";
 display(ar, n);
 cout << endl;
 return 0;
}
 
