#include <iostream>
using namespace std;

enum COLOR{
  BLACK,
  WHITE,
  RED,
  BLUE,
  GREEN
};


int main()
{
  COLOR color1 ;
  COLOR color2 ;
  COLOR color3 ; 
  COLOR color4 ;
  COLOR color5 ;

  color1 = BLACK;
  color2 = WHITE;


  cout << color1 <<endl;
  cout << color2 << endl;
  
  return 0;
}