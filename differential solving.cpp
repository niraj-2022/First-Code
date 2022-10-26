#include<stdio.h>
float func(float x,float y);
int main()
{
    float xn;
   //printf("Enter xn:"); 
    scanf("%f",&xn);
    	float x0=0.3,y0=2.0,h=0.2,k1,k2,k3,k4,k;
	while(x0<xn)
    {
      k1=func(x0,y0);
      k2=func((x0+(h/2.0)),(y0+k1*h/2.0));
      k3=func((x0+h/2.0),(y0+k2*h/2.0));
      k4=func((x0+h),(y0+k3*h));
      k=((k1+2*k2+2*k3+k4)/6);
      y0=y0+(k*h);
      x0=x0+h;
    }
	 printf("y=%f\n",y0); 
	return 0;
}
float func(float x , float y)
{
  return((2*x*x-3*y*y+x)/10);
}
