#include<stdio.h>
float fun (float x);
void bisection (float *x, float a, float b, int *itr);

int main ()
{
    int itr = 0;
    float x, a=1, b=2, allerr, x1;
    //printf("\nEnter the value of allowed error: \n");
    scanf("%f", &allerr);
    bisection (&x, a, b, &itr);

/* Use the printf statement given below
printf("Iteration Count=%d, root = %6.4f\n", itr, x1);
fun is the function and 'a' and 'b' are the points of initial interval [a,b]
x1 is the current root and x is the root of the previous iteration
*/
do
{
  if(fun(a)*fun(x)<0)
    b=x;
  else
    a=x;
   bisection (&x1, a, b, &itr);
  if(((x1>x)?(x1-x):(x-x1))<allerr)
  {
    printf("Iteration Count=%d, root = %6.4f\n", itr, x1);
    return 0;
  }
  x=x1;
}
while(itr>=0);
printf("the solution doesn't converge.");
return 1;
}
float fun(float x)
{
  return (2*x*x*x-3*x-5);
}
void bisection(float *x,float a,float b,int *itr)
{
  *x=(a+b)/2;
  ++(*itr);
}
