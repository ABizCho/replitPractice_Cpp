#include <iostream>
using namespace std;

struct Mycar{
  string number;
  int year;
  string name;
  bool insurance;
};

void showCarinfo(Mycar mycar)
{
  cout << "차량번호 : " << mycar.number << endl;
  cout << "연식 : " << mycar.year << endl;
  cout << "이름 : " << mycar.name << endl;
  
  char insure = (mycar.insurance == true) ? 'Y':'N' ; 
  cout << "보험여부 : " << insure << endl;
};

int main()
{
  Mycar car1;

  car1.number = "0827";
  car1.year = 2109;
  car1.name = "붕붕이";
  car1.insurance =true;

  showCarinfo(car1);
  return 0;
}