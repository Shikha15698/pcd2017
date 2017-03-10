#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct complex 
{
  float real;
  float imag;
};

struct quad
{
  struct complex r1,r2;
 };
int roots( int a, int b, int c, struct quad *r)
 {
   float d;
   d=((b*b)-4*a*c);
   if(a==0)
   {
     return (-1);
    }
    if(d==0)
    {
      r->r1.real=r->r2.real=((-b)/(2*a));
      r->r1.imag=r->r2.imag=0;
     }
     if(d>0)
     {
       r->r1.real=(-b+sqrt(d))/(2*a);
       r->r2.real=(-b-sqrt(d))/(2*a);
       r->r1.imag=r->r2.imag=0;
       return 1;
      }
      r->r1.real=r->r2.real=(-b)/(2*a);
      r->r1.imag=(sqrt((-d))/(2*a));
      r->r2.imag=(sqrt(d))/(2*a);
      return 2;
  }
  int main()
  {
    float a,b,c;
    struct quad r;
    printf("enter the coefficients of the quadratic equation a,b and c");
    scanf("%f%f%f",&a,&b,&c);
    roots(a,b,c,&r);
    printf("Solution:Root 1 \n The real part of root1 is %f \n",r.r1.real);
    printf(" The imaginary part of root1 is %f \n",r.r1.imag);
    printf("Root 2  \n The real part of root2 is %f \n",r.r2.real);
    printf("The imaginary part of root2 is %f \n",r.r2.imag);
    return 5;
}
    
         
       
         

  

  
 
