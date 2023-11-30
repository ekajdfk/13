#include <stdio.h>
#include <stdlib.h>


struct student
{
         int ID; //학번
         char name[100]; //이름 
         float score;// 학점 
};
  
  
int main(int argc, char *argv[])
{
  struct student s1 = {1234, "sy", 4.3}; 
  
  s1.ID = 123;
  s1.name[0] = 'c';
  s1.score = 4;
  
  printf("ID: %i\n", s1.ID); 
  printf("name: %s\n", s1.name);
  printf("score: %f\n", s1.score);
  
  
  system("PAUSE");	
  return 0;
}
