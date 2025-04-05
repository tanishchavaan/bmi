#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;
    double weight, heightCm, heightM, bmi;


    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (M/F/O): ";
    cin >> gender;

    cout << "Enter your weight in kg: ";
    cin >> weight;

    cout << "Enter your height in cm: ";
    cin >> heightCm;


    heightM = heightCm / 100.0;
    bmi = weight / (heightM * heightM);


    cout << "\nYour Age: " << age << endl;
    cout << "Your Gender: " << gender << endl;
    cout << "Your BMI: " << bmi << endl;

    
    if (bmi < 18.5) {
        cout << "You're underweight. Eat more nutrient-rich food! 🍕🥗" << endl;
    } else if (bmi < 24.9) {
        cout << "You're at a healthy weight. Keep up the good work! 💪" << endl;
    } else if (bmi < 29.9) {
        cout << "You're overweight. Try exercising and eating balanced meals. 🏃‍♂️🍏" << endl;
    } else {
        cout << "You're in the obese range. Consider a healthier lifestyle! 🏋️‍♂️🥦" << endl;
    }

    return 0;
}

