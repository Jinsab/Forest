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
  printf("���̵�: %d \n", s.A);
  
  scanf("%f", &s.percentage);
  printf("�����: %f \n", s.percentage);

  return 0;
}
