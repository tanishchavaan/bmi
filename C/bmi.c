#include <stdio.h>

int main() {
    int age;
    char gender;
    float weight, height, height_cm, bmi;

    // Taking input
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your gender (M/F/O): ");
    scanf(" %c", &gender); // Space before %c to handle newline character

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    
    printf("Enter your height in cm: ");
    scanf("%f", &height);

    // Convert height from cm to meters
    height_cm = height / 100;

    // Calculate BMI
    bmi = weight / (height_cm * height_cm);

    // Display BMI result
    printf("Your BMI is: %.2f\n", bmi);

    // Provide suggestions
    if (bmi < 18.5)
        printf("You are underweight. Try to eat a balanced diet.\n");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("You have a normal weight. Keep maintaining your lifestyle!\n");
    else if (bmi >= 25 && bmi < 29.9)
        printf("You are overweight. Consider regular exercise and a healthy diet.\n");
    else
        printf("You are obese. Seek medical advice for better weight management.\n");

    return 0;
}
