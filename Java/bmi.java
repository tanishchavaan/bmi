import java.util.Scanner;

public class bmi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        System.out.print("Enter your gender (M/F/O): ");
        char gender = sc.next().toUpperCase().charAt(0);

        System.out.print("Enter your weight in kg: ");
        double weight = sc.nextDouble();

        System.out.print("Enter your height in cm: ");
        double heightCm = sc.nextDouble();

    
        double heightM = heightCm / 100;

    
        double bmi = weight / (heightM * heightM);

    
        System.out.println("\nYour Age: " + age);
        System.out.println("Your Gender: " + gender);
        System.out.println("Your BMI: " + String.format("%.2f", bmi));

        if (bmi < 18.5) {
            System.out.println("You're underweight. Eat more nutrient-rich food! 🍕🥗");
        } else if (bmi < 24.9) {
            System.out.println("You're at a healthy weight. Keep up the good work! 💪");
        } else if (bmi < 29.9) {
            System.out.println("You're overweight. Try exercising and eating balanced meals. 🏃‍♂️🍏");
        } else {
            System.out.println("You're in the obese range. Consider a healthier lifestyle! 🏋️‍♂️🥦");
        }

        sc.close(); 
    }
}
