#include <iostream>

int add_int(int a, int b)
{
  return a + b;
}

int main(){
  int a, b;
  int sum=0;
  a =10;
  b = 20;
  //sum - a + b;
  sum = add_int(a, b);
  cout << "sum = " << sum <<endl;
  return 1;
}
