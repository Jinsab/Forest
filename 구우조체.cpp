#include <stdio.h>
 
typedef struct student {
  int A;
  char *B;
  float percentage;
}stu;
  
int main()
{
  stu s;
  scanf("%d", &s.A);
  printf("아이디: %d \n", s.A);
  
  scanf("%f", &s.percentage);
  printf("백분율: %f \n", s.percentage);

  return 0;
}
