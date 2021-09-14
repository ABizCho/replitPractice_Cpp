#include <iostream>
using namespace std;

int main(){
  
  int i = 0;
  int sum = 0;

  while ( i < 10){
    i++;
    sum = sum + i;
    cout<<"sum("<<i<<") : "<<sum<<endl;

  }
  return 0;

}