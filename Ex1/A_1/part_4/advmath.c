#include <stdio.h>
#include "advmath.h"

float average(int arr[], int size){
int x = 0;
for (int i = 0; i < size; i++)
{
  x += arr[i];
}
return x / size;
}

float power(int a, int b){
    int x = 1;
    for (int i = 0; i < b; i++)
    {
    x *= a;
    }
    return x;
}

float square_root(int a){
     double guess = a / 2.0; 
     double epsilon = 0.00001; 

    while ((guess * guess - a) > epsilon || (a - guess * guess) > epsilon) {
        guess = (guess + a / guess) / 2.0;
    }
    return guess;
}


int factorial(int a){

int x = 1;

for (int i = a; i > 0; i--)
{
x *= i;
}
return x;
}