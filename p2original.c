#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter x1 : \n");
  scanf("%f",x1);
  printf("Enter y1 : \n");
  scanf("%f",y1);
  printf("Enter x2 : \n");
  scanf("%f",x2);
  printf("Enter y2 : \n");
  scanf("%f",y2);
   printf("Enter x3 : \n");
  scanf("%f",x3);
  printf("Enter y3 : \n");
  scanf("%f",y3);
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float a,b,c,area;
  a=x1*(y2-y3);
  b=x2*(y3-y1);
  c=x3*(y1-y2);
  area=a+b+c;

  if (area==0)
  {
    return 1;
  }
  else
  {
    return 2;
  }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int is_triangle)
{
  if (is_triangle==1)
  {
    printf("These points are not forming any triangle");
  }
  else if (is_triangle==2)
  {
    printf("These points are forming triangle");
  }
  else
  {
    printf("Error");
  }
}
int main()
{
  float x1,x2,x3,y1,y2,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  int ans;
  ans=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,ans);
  return 0;
}