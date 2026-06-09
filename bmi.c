#include <stdio.h>

int main()
{
    float weight, height, bmi;
    int weight_result, height_result;

    char *category = "";
    char *error = "";
    int is_valid = 1;

    printf("Enter your weight (kg): \n");
    weight_result = scanf("%f", &weight);

    printf("Enter your height (m): \n");
    height_result = scanf("%f", &height);

    if (weight_result != 1 || height_result != 1)
    {
        is_valid = 0;
        error = "Invalid input type!!";
    }
    else if (weight > 300 || weight < 30)
    {
        is_valid = 0;
        error = "Weight out of range!!\n(Weight must be between 30-300kg)";
    }
    else if (height > 2.5 || height < 1.0)
    {
        is_valid = 0;
        error = "Height out of range!!\n(Height must be between 1.0-2.5m)";
    }

    if (is_valid)
    {
        bmi = weight / (height * height);
        if (bmi < 18.5)
        {
            category = "Underweight";
        }
        else if (bmi <= 24.9)
        {
            category = "Normal weight";
        }
        else if (bmi <= 29.9)
        {
            category = "Overweight";
        }
        else
        {
            category = "Obese";
        }
    }

    printf("=====================================\n");
    printf("             BMI  REPORT             \n");
    printf("=====================================\n");

    if (is_valid)
    {
        printf("       Weight    : %.1f kg\n", weight);
        printf("       Height    : %.2f m\n", height); 
        printf("       BMI       : %.1f\n", bmi);
        printf("       Result    : %s\n", category);
    }
    else
    {
        printf("  Status    : FAILED!\n");
        printf("  Error     : %s\n", error);
    }
    printf("=====================================\n");

    return 0;
}