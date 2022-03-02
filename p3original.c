#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter any number : \n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  if (n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0)
  {
    if (n!=2 && n!=3 && n!=5 && n!=7 && n!=11)
    {
      return 1;
    }
  }
  else
  {
    return 2;
  }
}
void output(int n, int is_prime)
{
  if (is_prime==1)
  {
    printf("The number %d is not prime",n);
  }
  else
  {
    printf("The number is %d is prime",n);
  }
}
int main()
{
  int n;
  n=input_number();
  int ans;
  ans=is_prime(n);
  output(n,ans);
  return 0;
}