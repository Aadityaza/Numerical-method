#include<stdio.h>
#include<math.h>

float f(float x){

    //return x*log10(x)-1.2;
    return (x*x)-4*x-7;
}
float fp(float x)
{
   // return log10(x)+1;
   return (2*x)-4;
}

int main()
{
    float x=0,x2;
    int i=0;
    float e;
   do{

       x2=x-(f(x)/fp(x));
       printf("In iteration %d value is : %f\n",i,x2);
       e=x-x2;
       x=x2;
       i++;

    }while(e>0.0001||e<-0.0001);
printf("The value is : %f \n",x);

}
