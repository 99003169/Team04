#include<function.h>
#include<stdio.h>

int main()
{
    float input1,result;
    int choice;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.celsius_fahrenheit\n");
    printf("2.fahrenheit_kelvin\n");
    printf("3.fahrenheit_celsius\n");
    printf("4.celsius_kelvin\n");
    printf("5.kelvin_celsius\n");
    printf("6.fahrenheit_kelvin\n");
    printf("\nEnter you choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nEnter temp to convert");
            scanf("%f",&input1);
            result = do_celsius_fahrenheit(input1);
            printf("%f",result);
            break;

        case 2:
            printf("\nEnter temp to convert");
            scanf("%f",&input1);
            result = do_fahrenheit_kelvin(input1);
            printf("%f",result);
            break;

        case 3:
            printf("\nEnter temp to convert");
            scanf("%f",&input1);
            result = do_fahrenheit_celsius(input1);
            printf("%f",result);
            break;

        case 4:
            printf("\nEnter temp to convert");
            scanf("%f",&input1);
            result = do_celsius_kelvin(input1);
            printf("%f",result);
            break;

        case 5:
            printf("\nEnter temp to convert");
            scanf("%f",&input1);
            result = do_kelvin_celsius(input1);
            printf("%f",result);
            break;

        case 6:
           printf("\nEnter temp to convert");
            scanf("%f",&input1);
            result = do_fahrenheit_kelvin(input1);
            printf("%f",result);
            break;
    }
    
    float x,y,answer;
    int n;
    printf("What do you want to do?\n");
    printf("1.sin 2.cos 3.tan 4.sinh 5.cosh 6.tanh 7.1og10 8.square root 9.exponent 10.power");
    scanf ("%d",&n);
    if (n<7 && n>0)
    {
        printf("\n What is x? ");
        scanf("%f",&x);
        switch (n)
        {
            case 1: answer = sine(x);       break;
            case 2: answer = cosine(x);     break;
            case 3: answer = tangent(x);    break;
            case 4: answer = sineh(x);      break;
            case 5: answer = cosineh(x);    break;
            case 6: answer = tangenth(x);   break;
            case 7: answer = logten(x);     break;
        }
    }
    /*if (n==10)
    {
        printf("What is x and y?\n");
        scanf("%f%f",&x,&y);
        answer = power(x,y);
    }
    if (n>0 && n<11)
        printf("%f",answer);
    else
        printf("Wrong input.\n");
    */

    int option,in1,in2,out;
    double triginput,trigoutput;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Square Root\n");
    printf("6.Modulus\n");
    printf("7.Factorial\n");
    printf("8.exponent\n");
    printf("\nEnter you choice: ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
            printf("\nEnter two number to add");
            scanf("%d%d",&in1,&in2);
            out = do_add(in1,in2);
            printf("%d",out);
            break;
            
        case 2:
            printf("\nEnter two number to subtract");
            scanf("%d%d",&in1,&in2);
            out = do_subtract(in1,in2);
            printf("%d",out);
            break;
            
        case 3:
            printf("\nEnter two number to multiply");
            scanf("%d%d",&in1,&in2);
            out = do_multiply(in1,in2);
            printf("%d",out);
            break;
            
        case 4:
            printf("\nEnter two number to Divide");
            scanf("%d%d",&in1,&in2);
            out = do_divide(in1,in2);
            printf("%d",out);
            break;
            
        case 5:
            printf("\nEnter a number for squareroot");
            scanf("%lf",&triginput);
            trigoutput = do_squareroot(triginput);
            printf("%lf",trigoutput);
            break;
            
        case 6:
            printf("\nEnter two number to Mod");
            scanf("%d%d",&in1,&in2);
            out = do_modulus(in1,in2);
            printf("%d",out);
            break;
            
            
        case 7:
            printf("\nEnter a number for factorial");
            scanf("%d",&in1);
            out = do_fact(in1);
            printf("%d",out);
            break;

        case 8:
            printf("\nEnter a number for factorial");
            scanf("%d",&in1);
            out = do_exponent(in1);
            printf("%d",out);
            break;
            
    }

    return 0;

}

