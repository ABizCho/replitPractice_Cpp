//사용자정의함수와 pointer를 이용해 두 변수의 값을 치환하는 프로그램 


#include <iostream>
using namespace std;

void swap(int* n1,int* n2)
{
  int temp ;
  
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
  
}

int main()
{
  
  int v1 = 10;
  int v2 = 20;
  
  cout << "original v1: "<< v1 <<" | v2 : "<<v2<<endl;
  swap(&v1,&v2);
  cout << "swapped v1: "<< v1 <<" | v2 : "<<v2<<endl;
  
  return 0;
}