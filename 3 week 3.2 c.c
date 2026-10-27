#include<stdio.h>
#include<math.h>
int main()
{
   float P,R,T,CI;
   printf("enter principal amount rate of interest and time period:");
   scanf("%f%f%f",&P,&R,&T);
   CI=P*pow(1+R/100,T)-P;
   printf("compound interest=%.2f",CI);
   return 0;
}  
  











    