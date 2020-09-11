//A program to determine the nature of roots of a quadratic equation. 
#include<stdio.h>
int main(){
float a, b, c, discriminant;
printf("Give the value of the variables a,b and c in th quadratic equation");
scanf("%f%f%f",&a, &b, &c);
discriminant = b^2-4*a*c;
if( discriminant >= 0){
printf("The discriminant is %f", &discriminant);
printf("Hence the quadratic equation has real and distinct roots");}
else if( discriminant ==0){
printf("The discriminant is %f", &discriminant);
printf("Hence the quadratic equation has real and equal roots");}
else( discriminant <=0){
printf("The discriminant is %f", &discriminant);
printf("Hence the quadratic equation has imaginary or complex roots");}
return 0;}
