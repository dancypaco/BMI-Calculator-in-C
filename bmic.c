#include <stdio.h>
#include <stdlib.h>

void main()
{
 int option;
 float num1,num2,bmi;

    do
    {
        printf("\n\nBMI CALCULATOR \nChoices\n");
        printf("1.Enter in kilograms and centimeter.\n2.Enter in pounds and feet.\n3.Exit\n\nEnter your choice:");
        scanf("%d",&option);
        if(option == 1)
        {
                printf("Enter the weight in kilograms:");
                scanf("%f",&num1);
                printf("Enter the height in centimeters:");
                scanf("%f",&num2);
                bmi=(num1/((num2/100)*(num2/100)));
                printf("\nThe body mass index is:%f",bmi);

                if(bmi >= 16.0 && bmi <= 18.4)
                    { printf("\nYour BMI category is: Underweight\n"); }
                else if(bmi >= 18.5 && bmi <= 24.9)
                    {
                      printf("\nYour BMI category is: Normal\n");
                    }
                else if(bmi >= 25.0 && bmi <= 29.9)
                    {
                      printf("\nYour BMI category is: Overweight\n");
                    }
                else if(bmi >= 30)
                    {
                       printf("\nYour BMI category is: Obese\n");
                    }

            }

         if (option == 2)
          {
                printf("Enter the weight in pounds:");
                scanf("%f",&num1);
                printf("Enter the height in feet:");
                scanf("%f",&num2);
                bmi=(num1/((num2*12)*(num2*12)))*703;
                printf("\nThe body mass index is:%f",bmi);

                if(bmi >= 16.0 && bmi <= 18.4){
                        printf("\nYour BMI category is: Underweight\n"); }
                else if(bmi >= 18.5 && bmi <= 24.9){
                      printf("\nYour BMI category is: Normal\n");
                    }
                else if(bmi >= 25.0 && bmi <= 29.9){
                      printf("\nYour BMI category is: Overweight\n");
                    }
                else if(bmi >= 30){
                       printf("\nYour BMI category is: Obese\n");
                    }

                }



         }while(option!=3);


}
