#include <iostream>
#include <cstdlib>
using namespace std;

int fib(int);

int main(int argc, char* argv[])
{
 int nth_in = atoi(argv[1]);

 if (nth_in < 0)
  {
   cout << "The zeroth fibonacci number is 0"  << endl;
   exit(1);
  }

 int nth = fib(nth_in);

 if (nth >= 0)
   cout << nth << endl;
 else
   cout << "fibonacci number " << nth_in << " is too large to compute" << endl; 
 return 0;
}

int fib(int nth)
{
 int fn_minus_2 = 0;
 int fn_minus_1 = 1;
 int fn = 0;

 //0th and 1st Fibonacci number 
 if (nth == 0)
   return 0; 
 if (nth == 1)
   return 1; 
 
 while (nth > 1)
 {
  fn = fn_minus_2 + fn_minus_1;  //2nd ... nth Fibonacci numbers
  fn_minus_2 = fn_minus_1;       //advance fib-2
  fn_minus_1 = fn;               //advance fib-1
  --nth; 
 }
 return fn;
}

void fibError()
{
   cout << "Enter a number >= 0" << endl;
   exit(1); 
}
