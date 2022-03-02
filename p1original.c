#include <stdio.h>
void input(float *x1, float *x2, float *y1, float *y2)
{
  printf("Enter x1 : \n");
  scanf("%f",x1);
  printf("Enter y1 : \n");
  scanf("%f",y1);
  printf("Enter x2 : \n");
  scanf("%f",x2);
  printf("Enter y2 : \n");
  scanf("%f",y2);
}
float my_sqrt(float f)
{
  float a=f/2;
  float b=f;
  while(b!=a)
  {
    b=a;
    a=(a+(f/a))/2;
  }
  return a;
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  float r;
  r=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  *distance=my_sqrt(r);
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}
int main()
{
  float x1,y1,x2,y2;
  input(&x1,&y1,&x2,&y2);
  float distance;
  float sqrt;
  find_distance(x1,y1,x2,y2,&distance);
  output(x1,y1,x2,y2,distance);
  return 0;
}