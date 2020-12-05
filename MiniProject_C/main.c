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
    if (n<9 && n>0)
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
            case 8: answer = squareroot(x); break;
            case 9: answer = exponent(x);   break;
        }
    }
    if (n==10)
    {
        printf("What is x and y?\n");
        scanf("%f%f",&x,&y);
        answer = power(x,y);
    }
    if (n>0 && n<11)
        printf("%f",answer);
    else
        printf("Wrong input.\n");
    int num1,num2;
    float result;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform: ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
            result=add(num1,num2);
            break;
             
        case '-':
            result=subtract(num1,num2);
            break;
         
        case '*':
            result=multiply(num1,num2);
            break;
             
        case '/':
            result=divide(num1,num2);
            break;
             
        case '%':
            result=mod(num1,num2);
            break;
        default:
            printf("Invalid operation.\n");
    }
    
 
    printf("Result: = %f\n",result);
    return 0;

}

