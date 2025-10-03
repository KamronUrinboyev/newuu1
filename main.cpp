// #include <iostream>
// using namespace std;

//problem1
// int product(int a, int b) {
//     return a * b;
// }
//
// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//
//     cout << "The product is: " << product(num1, num2) << endl;
//     return 0;
// }

//problem2
// double acceleration(double v1, double v2, double t) {
//     return (v2 - v1) / t;
// }
//
// int main() {
//     double v1, v2, t;
//     cin >> v1;
//     cin >> v2;
//     cin >> t;
//
//     cout << "The acceleration is: " << acceleration(v1, v2, t) << endl;
//
//     return 0;
// }

//problem3
// void fun(double radius) {
//     double PI = 3.141592653589793;
//     double circumference = 2 * PI * radius;
//     double area = PI * radius * radius;
//
//     cout << "Circumference: " << circumference << endl;
//     cout << "Area: " << area << endl;
// }
// int main() {
//     double r;
//     cout << "Enter radius of the circle: ";
//     cin >> r;
//     fun(r);
//     return 0;
// }

//problem4
// void fun(double radius) {
//     double PI = 3.141592653589793;
//     double circumference = 2 * PI * radius;
//     double area = PI * radius * radius;
//
//     cout << "Circle Circumference: " << circumference << endl;
//     cout << "Circle Area: " << area << endl;
// }
//
// void fun(double a, double b) {
//     double perimeter = 2 * (a + b);
//     double area = a * b;
//
//     cout << "Rectangle Perimeter: " << perimeter << endl;
//     cout << "Rectangle Area: " << area << endl;
// }
//
// int main() {
//     double r, a, b;
//     cout << "Enter radius of circle: " << endl;
//     cin >> r;
//     fun(r);
//     cout << "Enter sides of rectangle (a b): ";
//     cin >> a >> b;
//     fun(a, b);
//     return 0;
// }

//problem5
// void swapNumbers(int x, int y) {
//     x = x + y;
//     y = x - y;
//     x = x - y;
// }
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     swapNumbers(a, b);
//
//     cout << "a = " << a << ", b = " << b << endl;
//     return 0;
// }

//problem6
// int Factorial(int n = 1) {
//     int result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }
// int main() {
//     int num;
//     cout << "Enter a number (or 0 to skip): ";
//     cin >> num;
//     if (num == 0)
//         cout << "Factorial: " << Factorial() << endl;
//     else
//         cout << "Factorial: " << Factorial(num) << endl;
//     return 0;
// }

//problem7
// int gcd(int num1, int num2) {
//     int result = 1;
//     int smallest;
//
//     if (num1 < num2) {
//         smallest = num1;
//     } else {
//         smallest = num2;
//     }
//
//     for (int i = 1; i <= smallest; i++) {
//         if (num1 % i == 0 && num2 % i == 0) {
//             result = i;
//         }
//     }
//     return result;
// }
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//
//     cout << "GCD is " << gcd(a, b) << endl;
//
//     return 0;
// }

//problem8
// int maximum(int a, int b, int c) {
//     int max = a;
//     if (b > max) {
//         max = b;
//     }
//     if (c > max) {
//         max = c;
//     }
//     return max;
// }
//
// int minimum(int a, int b, int c) {
//     int min = a;
//     if (b < min) {
//         min = b;
//     }
//     if (c < min) {
//         min = c;
//     }
//     return min;
// }
//
// int main() {
//     int x, y, z;
//     cout << "Enter three numbers: ";
//     cin >> x >> y >> z;
//
//     cout << "Maximum: " << maximum(x, y, z) << endl;
//     cout << "Minimum: " << minimum(x, y, z) << endl;
//
//     return 0;
// }

//problem9
// int sum(int a, int b) {
//     return a + b;
// }
// int subtract(int a, int b) {
//     return a - b;
// }
// int product(int a, int b) {
//     return a * b;
// }
// float division(int a, int b) {
//     if (b == 0) {
//         cout << "Can't do division as the second number is 0" << endl;
//         return 0;
//     }
//     else {
//         return (float)a / b;
//     }
// }
//
// int main() {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;
//
//     cout << "Sum: " << sum(x, y) << endl;
//     cout << "Subtract: " << subtract(x, y) << endl;
//     cout << "Product: " << product(x, y) << endl;
//     cout << "Division: " << division(x, y) << endl;
//
//     return 0;
// }

//problem10
// int getTriangularNumber(int m) {
//     return (m * (m + 1)) / 2;
// }
//
// int main() {
//     for (int i = 1; i <= 75; i++) {
//         cout << getTriangularNumber(i) << " ";
//         if (i % 5 == 0) {
//             cout << endl;
//         }
//     }
//     return 0;
// }

//problem11
// void displayEven(int number) {
//     int digit;
//
//     cout << "Even digits: ";
//     while (number > 0) {
//         digit = number % 10;
//         if (digit % 2 == 0) {
//             cout << digit << " ";
//         }
//         number = number / 10;
//     }
//     cout << endl;
// }
//
// int main() {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;
//
//     displayEven(num);
//
//     return 0;
// }

//problem12
// int cubeOfDigits(int number) {
//     int sum = 0, digit;
//     while (number > 0) {
//         digit = number % 10;
//         sum = sum + (digit * digit * digit);
//         number = number / 10;
//     }
//     return sum;
// }
// void isArmstrong(int sum, int number) {
//     if (sum == number) {
//         cout << number << " is an Armstrong number." << endl;
//     } else {
//         cout << number << " is NOT an Armstrong number." << endl;
//     }
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     int sum = cubeOfDigits(num);
//     isArmstrong(sum, num);
//
//     return 0;
// }

//problem13
// int numberOfDaysInFebruary(int year) {
//     if (year % 400 == 0) {
//         return 29;
//     }
//     else
//         if (year % 100 == 0) {
//             return 28;
//     }   else
//             if (year % 4 == 0) {
//                 return 29;
//     }       else {
//                 return 28;
//     }
// }
//
// int main() {
//     for (int year = 1985; year <= 1993; year++) {
//         cout << year << " " << numberOfDaysInFebruary(year) << endl;
//     }
//     return 0;
// }

//problem14
// double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
//     double result = investmentAmount;
//     int months = years * 12;
//
//     for (int i = 0; i < months; i++) {
//         result = result * (1 + monthlyInterestRate);
//     }
//     return result;
// }
//
// int main() {
//     double investmentAmount, annualRate;
//     int years;
//     cout << "Enter investment amount: ";
//     cin >> investmentAmount;
//     cout << "Enter annual interest rate (in %): ";
//     cin >> annualRate;
//     cout << "Enter number of years: ";
//     cin >> years;
//     double monthlyRate = (annualRate / 100.0) / 12.0;
//     double value = futureInvestmentValue(investmentAmount, monthlyRate, years);
//     cout << "Future investment value is: " << value << endl;
//     return 0;
// }

//problem15
// void printASCII(char ch1, char ch2, int numberPerLine) {
//     int count = 0;
//
//     for (char c = ch1; c <= ch2; c++) {
//         cout << c << " = " << (int)c << " ";
//         count++;
//         if (count % numberPerLine == 0) {
//             cout << endl;
//         }
//     }
//     cout << endl;
// }
// int main() {
//     char start, end;
//     int perLine;
//     cout << "Enter start character: ";
//     cin >> start;
//     cout << "Enter end character: ";
//     cin >> end;
//     cout << "Enter number per line: ";
//     cin >> perLine;
//
//     printASCII(start, end, perLine);
//
//     return 0;
// }
