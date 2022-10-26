#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);
    float k=0,s=1,f=1;
  int i,j;
  for(i=0; i<5; i++)
  {
   		s=1;
        f=1;
        for(j=0; j<5; j++)
        {
             if(j!=i)
             {
                   s=s*(a-t[j]);
                   f=f*(t[i]-t[j]);
             }
         }
         k=k+((s/f)*v[i]);
   }
   printf("The respective value of the variable v is: %.2f\n", k);
  return 0;
}

