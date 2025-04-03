def calculate_bmi(weight, height):
    #BMI Formula: weight (kg) / height^2 (m^2)
    height_m=height / 100
    bmi = weight / (height_m * height_m)
    return round(bmi, 2)
age = int(input("Enter your age: "))
gender = input("Enter your gender (M/F/O): ").strip().upper()
weight = float(input("Enter your weight in kg: "))
height = float(input("Enter your height in centimeters: "))

bmi = calculate_bmi(weight, height)
print(f"\nYour Age: {age}")
print(f"Your Gender: {gender}")
print(f"Your BMI: {bmi}")
if bmi < 18.5:
    print("You're underweight. Eat more nutrient-rich food! 20")
elif bmi < 24.9:
    print("You're at a healthy weight. Keep up the good work! ")
elif bmi < 29.9:
    print("You're overweight. Try exercising and eating balanced meals. ")
else:
    print("You're in the obese range. Consider a healthier lifestyle! ")
