#include<function.h>
#include<stdio.h>
#include<math.h>
#define PI 3.14159265

float do_celsius_fahrenheit(float input1)
{
    float result = (9/5)*(input1)+32;
    return result;
}

float do_fahrenheit_kelvin(float input1)
{
    float result = (9/5)*(input1-273)+32;
    return result;
}


float do_fahrenheit_celsius(float input1)
{
    float result = (5/9)*(input1-32);
    return result;
}

float do_celsius_kelvin(float input1)
{
    float result = input1+273;
    return result;
}

float do_kelvin_celsius(float input1)
{
    float result = input1-273;
    return result;
}

float do_kelvin_fahrenheit(float input1)
{
    float result = (5/9)*(input1-32)+273;
    return result;
}



float sine(float x)
{
    return (sin (x*PI/180));
}
float cosine(float x)
{
    return (cos (x*PI/180));
}
float tangent(float x)
{
    return (tan(x*PI/180));
}
float sineh(float x)
{
    return (sinh(x));
}
float cosineh(float x)
{
    return (sinh(x));
}
float tangenth(float x)
{
    return (sinh(x));
}
float logten(float x)
{
    return (log10(x));
}



int do_add(int in1,int in2)
{
    int out = in1+in2;
    return out;
}

int do_subtract(int in1,int in2)
{
    int out = in1-in2;
    return out;
}

int do_multiply(int in1,int in2)
{
    int out = in1*in2;
    return out;
}

int do_divide(int in,int in)
{
    int out = in1/in2;
    return out;
}

double do_squareroot(double triginput)
{
    double out = sqrt(triginput);
    return out;
}

int do_modulus(int in1,int in2)
{
    int out = in1 % in2;
    return out;
}

int do_fact(int in1)
{
    int i,fact =1;
    if (in1 < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= in1; ++i) {
            fact *= i;
        }
        return fact;
    }
}

int do_exponent(int in1)
{
    return(exp(in1));
}

/*
float power(float x, float y)
{
    return (pow(x,y));
}
*/
