#include <stdio.h>
int input()
{
  int n;
  printf("Enter the limit : \n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int term1=0;
  int term2=1;
  int unknown_term=term1+term2;

  printf("Fibonacci Series: %d, %d, ",term1,term2);

  for (int i=3;i<=n;++i)
  {
    printf("%d, ",unknown_term);
    term1=term2;
    term2=unknown_term;
    unknown_term=term1+term2;
  }
  return unknown_term;
}
void output(int fibo)
{
  printf("%d",fibo);
}
int main()
{
  int n;
  n=input();
  int fibo;
  fibo=find_fibo(n);
  output(fibo);
  return 0;
}