#include<stdio.h>
int revrse(int n)
{
  int r, s=0;
  r= n%10;
  s=s+(r*10);
  n=n/10;
  return(s);
  }
  int main()
  {
     int n;
     printf("enter a number \n");
     scanf("%d",n);

  }
