//재귀함수로 factorial 구현

#include <iostream>
using namespace std;


int factorial(int num)
{
  if ( num == 1 )
   return num;

  return num*factorial(num-1);
}

int main()
{
  cout << factorial(5) <<endl;
  return 0 ;
}