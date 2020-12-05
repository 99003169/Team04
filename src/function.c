#include<function.h>
#include<stdio.h>
#include<math.h>

float do_celsius_fahrenheit(float input1)
{
    float result = 9/5(input1)+32;
    return result;
}

float do_fahrenheit_kelvin(float input1)
{
    float result = 9/5(input1-273)+32;
    return result;
}


float do_fahrenheit_celsius(float input1)
{
    float result = 5/9(input1-32);
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

float do_fahrenheit_kelvin(float input1)
{
    float result = 5/9(input1-32)+273;
    return result;
}
