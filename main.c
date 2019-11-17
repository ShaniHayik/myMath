#include "myMath.h"
#include <stdio.h>


int main (void) {
double a, mulA, mulA2, pow, expA, powA, divA;
float result;
int b;
printf("please enter a number :");
scanf("%lf", &a);
 

b=a;
expA=Exp(b);
powA=Pow(a,3);
result = Add(expA, powA);
result = Sub(result, 2);
printf ("\n %0.4f", expA);
printf("the value of f(x)= e^x+x^3-2 at the point %0.4f is:"  ,a);
printf ("%0.4f", result);


mulA = Mul(a,3);
pow = Pow(a,2);
mulA2 = Mul(pow,2);
result = Add(mulA2, mulA);
printf("\n the value of f(x)= 3x+2x^2 at the point %0.4f is:"  ,a);
printf ("%0.4f", result);


pow = Pow(a, 3);
mulA = Mul(pow, 4);
divA = Div(mulA, 5);
mulA2 = Mul(a,2);
result = Sub(divA, mulA2);
printf("\n the value of f(x)= ((4x^3)/5)-2x at the point %0.4f is:"  ,a);
printf ("%0.4f", result);



return 0;
}
