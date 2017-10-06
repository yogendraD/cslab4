#include<iostream>

using namespace std;
 
int max_ar(int ar[], int len, int max,int i=1)
{
 if(i<len)
   {
    if(max<ar[i]) max = ar[i];
    max = max_ar(ar, len, max, ++i);
   }
 return max;

}


int min_ar(int ar[], int len, int min, int i=1)
{
 if(i<len)
   {
    if(min>ar[i]) min = ar[i];
    min = min_ar(ar, len, min, ++i);
   }
 return min;
 
}


int main()
{
 int n, max, min, ar[20];
 cout << "\nProgram to find maximum and minimum elements in array using recursion.";
 cout << "\nEnter the number of elements in the array :";
 cin >> n;
 for(int i =0; i<n; ++i)
 {
  cout << "\nEnter the "<<i<<"th element :"; cin >> ar[i];
 }
 max = max_ar(ar, n, ar[0]);
 min = min_ar(ar, n, ar[0]);
 cout << "\nMaximum element in array is :"<< max << endl;
 cout << "\nMinimum element in array is :"<< min << endl;
 return 0;
}
  
