#include <iostream>
using namespace std;

int main(){
  int i= 0;
  int sum = 0;

  for ( i = 1; i <= 10 ; i++ )
  {
    sum = sum + i;
    cout << "sum(" << i << ") : " << sum << endl;
  }
}