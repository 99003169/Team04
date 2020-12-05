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
float squareroot(float x)
{
    return (sqrt(x));
}
float exponent(float x)
{
    return(exp(x));
}
float power(float x, float y)
{
    return (pow(x,y));
}
