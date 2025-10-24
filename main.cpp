#include <iostream>
#include <cmath>
using namespace std;


//problem1
// int power(int x, int y) {
//     if (y == 0)
//         return 1;
//     return x * power(x, y - 1);
// }
// int main() {
//     int x, y;
//     cout << "Enter base and exponent: ";
//     cin >> x >> y;
//     cout << x << "^" << y << " = " << power(x, y) << endl;
//     return 0;
// }

//problem2
// int reverseNumber(int n, int rev = 0) {
//     if (n == 0)
//         return rev;
//     int lastDigit = n % 10;
//     rev = rev * 10 + lastDigit;
//     return reverseNumber(n / 10, rev);  // recursive call
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Reversed number: " << reverseNumber(num) << endl;
//     return 0;
// }

//problem3
// int reverseNumber(int n, int rev = 0) {
//     if (n == 0)
//         return rev;
//     int lastDigit = n % 10;
//     rev = rev * 10 + lastDigit;
//     return reverseNumber(n / 10, rev);
// }
// bool isPalindrome(int n) {
//     if (n < 0)
//         return false;
//     return n == reverseNumber(n);
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//
//     if (isPalindrome(num))
//         cout << num << " is a palindrome." << endl;
//     else
//         cout << num << " is not a palindrome." << endl;
//
//     return 0;
// }

//problem4
 // bool isPrimeRecursive(int n, int i = 2) {
 //     if (n <= 1)
 //         return false;
 //     if (i > sqrt(n))
 //         return true;
 //     if (n % i == 0)
 //         return false;
 //
 //     return isPrimeRecursive(n, i + 1);
 // }
 //
 // int main() {
 //     int num;
 //     cout << "Enter a number: ";
 //     cin >> num;
 //
 //     if (isPrimeRecursive(num))
 //         cout << num << " is a prime number." << endl;
 //     else
 //         cout << num << " is not a prime number." << endl;
 //
 //     return 0;
 // }

//problem5
// int countEven(int n) {
//     if (n < 0)
//         n = -n;
//     if (n == 0)
//         return 0;
//     int d = n % 10;
//     return (d % 2 == 0) + countEven(n / 10);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << countEven(n);
// }

//problem6
// int productDigits(int n) {
//     if (n == 0)
//         return 1;
//     return (n % 10) * productDigits(n / 10);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << productDigits(n);
// }

//problem7
// bool powerOfTwo(int n) {
//     if (n == 0)
//         return false;
//     if (n == 1)
//         return true;
//     if (n % 2 != 0)
//         return false;
//     return powerOfTwo(n / 2);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << (powerOfTwo(n) ? "true" : "false");
// }

//problem8
// bool increasingDigits(int n) {
//     if (n < 10)
//         return true;
//     int a = n % 10;
//     int b = (n / 10) % 10;
//     if (a <= b)
//         return false;
//     return increasingDigits(n / 10);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << (increasingDigits(n) ? "true" : "false");
// }

//problem9
// int countZeros(int n) {
//     if (n == 0)
//         return 0;
//     int d = n % 10;
//     return (d == 0) + countZeros(n / 10);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << countZeros(n);
// }

//problem10
// int fastPower(int x, int y) {
//     if (y == 0)
//         return 1;
//     if (y % 2 == 0) {
//         int half = fastPower(x, y / 2);
//         return half * half;
//     }
//     return x * fastPower(x, y - 1);
// }
//
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << fastPower(x, y);
// }