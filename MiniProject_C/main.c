#include<function.h>

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

    return 0;
}

