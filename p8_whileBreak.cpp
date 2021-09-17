
//user define function , recursive function , while , break 활용
#include <iostream>
using namespace std;

void squareWhile( int n ) //입력인자 x 7단까지 반복 계산출력후 break문으로 while 나가는 함수
{
  int i = 0;
  int result = 0;
  while( i < 10 )
  {
    i++;
    result = n * i ;
    cout<<result<<endl;
    
    if (i == 7)
    {
      break;
    }
  }
};


int main(){
  
  squareWhile(3);
  return 0;
}