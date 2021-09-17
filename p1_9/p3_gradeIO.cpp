#include <iostream>
using namespace std;

int main(){
  
  int scoreSubjects[3]={0,0,0};

  string subjects[3]=
  {"국어","영어","수학"};
  int nSubjects = sizeof(subjects)/sizeof(subjects[0]);

  for(int i=0; i<nSubjects; i++)
  {
  std::cout<<subjects[i]<<" 점수를 입력하세요:";
  std::cin>>scoreSubjects[i];
  }
  std::cout<<""<<std::endl;

  int sumScore=0;
  float avgScore=0;

  sumScore = scoreSubjects[0]+scoreSubjects[1]+scoreSubjects[2]; //총점계산

  avgScore = sumScore/(sizeof(subjects)/sizeof(subjects[0])); //평균점수계산
  
  // 학점 환산 //
  
  // 각 점수 출력 //
  std::cout<<subjects[0]+
  ": "<<scoreSubjects[0]<<std::endl;
  std::cout<<subjects[1]+": "<<scoreSubjects[1]<<std::endl;
  std::cout<<subjects[2]+": "<<scoreSubjects[2]<<std::endl;

  std::cout<<"총점: "<<sumScore<<std::endl;
  std::cout<<"평균: "<<avgScore<<std::endl;
  return 0;
}