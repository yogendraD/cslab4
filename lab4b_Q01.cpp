#include<iostream>

using namespace std;

double calc_power(float n, int p)
{
 double res=1;
 if(p)
   res = res*n*calc_power(n,--p);
 
 return res;

}

int main()
{
 int power;
 float number;
 double result;
 
 cout << "\nProgram to find power of any number using recursion.";
 cout << "\nEnter the number :";
 cin >> number;

 do{
 cout<<"\nEnter the power (should be positive) :";
 cin >> power;
 }while(power<0);

 result = calc_power( number, power);
 cout << "\nThe result of "<<number<<" ^ "<<power<<" is :"<< result << endl;
 
 return 0;
}

