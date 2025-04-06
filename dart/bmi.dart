import 'dart:io';

void main() {
  
  stdout.write("Enter your age: ");
  int age = int.parse(stdin.readLineSync()!);

  stdout.write("Enter your gender (M/F/O): ");
  String gender = stdin.readLineSync()!.toUpperCase();

  stdout.write("Enter your weight (kg): ");
  double weight = double.parse(stdin.readLineSync()!);

  stdout.write("Enter your height (feet): ");
  double heightFeet = double.parse(stdin.readLineSync()!);

  
  double heightMeters = heightFeet * 0.3048;


  double bmi = weight / (heightMeters * heightMeters);
  bmi = double.parse(bmi.toStringAsFixed(2)); 

  String category = "";
  String suggestion = "";

  if (bmi < 18.5)
  {
    category = "Underweight";
    suggestion = "You should consider increasing your calorie intake and focusing on a balanced diet.";
  } 
  else if (bmi >= 18.5 && bmi < 24.9)
  {
    category = "Normal weight";
    suggestion = "Great job! Maintain a healthy lifestyle and regular exercise.";
  }
   else if (bmi >= 25 && bmi < 29.9)
  {
    category = "Overweight";
    suggestion = "Consider a healthy diet and regular physical activity to manage your weight.";
  } 
  else
   {
    category = "Obese";
    suggestion = "It's important to consult a doctor or dietitian for a healthy weight management plan.";
  }


  print("Age: $age years");
  print("Gender: $gender");
  print("Weight: $weight kg");
  print("Height: $heightFeet feet ($heightMeters meters)");
  print("Your BMI: $bmi");
  print("Category: $category");
  print("Suggestion: $suggestion");
}
