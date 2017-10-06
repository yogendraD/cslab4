#include <iostream>

using namespace std;

int fibonacci_term(int n, int i=3, int preterm1 =0, int preterm2 =1)
{
  int term;
  term = preterm1 + preterm2;
  if(i<n)
     term = fibonacci_term(n,++i,preterm2,term);
    
  return term;
}

int main()
{
 int number, term_n;
 cout << "\nProgram to generate nth Fibonacci term using recursion.";
 cout << "\nEnter n :";
 cin >> number;
 
 if(number>0)
 { 
   cout << "\nThe term is : ";
   if(number==1) cout << 0 << endl;
   else 
     {
      term_n = fibonacci_term(number);
      cout << term_n << endl;
     }
 }

 else cout << "\nEnter valid number.";
 return 0;
}
