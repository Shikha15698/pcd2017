#include <stdio.h>
int multiply(int m,int n,int p,int q,int first[m][n],int second[p][q],int mul[m][q])
{
 int c,d,k,sum=0; 
for (c = 0; c < m; c++) {
for (d = 0; d < q; d++) {
for (k = 0; k < p; k++) {
sum = sum + (first[c][k]*second[k][d]);
}
mul[c][d] = sum;
sum = 0;
}
}
}
int get(int m,int n,int a[m][n])
{
for(int i=0;i<m;i++)
{ 
for(int j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
return a;
}
int disp(int m,int n,int a[m][n])
{
for(int i=0;i<m;i++)
{
printf("\n");
for(int j=0;j<n;j++)
{
printf("%d   ",a[i][j]);
}
}
return 0;
}
int main()
{
int m,n,p,q;
printf("enter the no. of rows and colums of 1st n second matrices \n");
scanf("%d %d \n %d %d",&m,&n,&p,&q);
if(n!=p)
{
printf("matrices with given rows and colums cannot be multiplied \n");
}
else
{
printf("enter matrix 1 \n");
int first[m][n];
get(m,n,first);
printf("enter matrix 2 \n");
int second[p][q];
get(p,q,second);
int mul[m][q];
multiply(m,n,p,q,first,second,mul);
disp(m,q,mul);
}
}
