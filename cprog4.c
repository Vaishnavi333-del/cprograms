#include<stdio.h>
float area_of_circle(float r);
int main(){
float a;
float r;
printf("enter the radius");
scanf("%f",&r);
a=area_of_circle(r);
printf("area of circle is %f",a);}
float area_of_circle(float r)
{
float pi=21.0/7.0;

return(pi*r*r);
}


 
