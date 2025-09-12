#include <iostream>
#include <cmath>
using namespace std;

//problem11
// int main() {
//     double num1 = 1.13e3;
//     double num2 = 411e-4;
//     cout << num1 << " " << num2 << endl;
//
//     return 0;
// }

//problem12
// int main() {
//     int NumStudents = 241;
//     int NumGroups = 11;
//     int LastGroup = NumStudents % NumGroups;
//     int FirstGroup = NumStudents / NumGroups;
//     cout << "First group number: " << FirstGroup << endl;
//     cout << "Last group number: " << LastGroup << endl;
//     return 0;
// }

//problem 13

// int main() {
//     double hex;
//     cout << "Enter the side of a Hexagon: " << endl;
//     cin >> hex;
//     double area = (3*sqrt(3)/2)*hex*hex;
//     cout << "Area is " << area << endl;
//     return 0;
//
// }

//problem14

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     num += 1;
//     num *= 3;
//     num -= 14;
//     num /= 4;
//     num -= 1;
//     num %= 9;
//     cout << num << endl;
//     return 0;
// }

//problem15

// int main() {
//
//     char c = 'A';  // starting character
//
//     char l1 = c + 7;   // H
//     char l2 = c + 4;   // E
//     char l3 = c + 11;  // L
//     char l4 = c + 11;  // L
//     char l5 = c + 14;  // O
//     char l6 = c - 32;  // !
//
//     cout << l1 << l2 << l3 << l4 << l5 << l6 << endl;
//     return 0;
// }

//problem16

// int main() {
//     double x = 17;
//     double y = 1;
//
//     double z = ( (x) + (++x) ) / ((y+y+y) * (y+y));
//
//
//     cout << z << endl;
//
//     return 0;
// }

//problem17
// int main() {
//     int a, b;
//
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << (a == b) << endl;
//
//     return 0;
// }

//problem 18
// int main() {
//     int a, b;
//
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//
//     cout << ((a < 140) && (a < b)) << endl;
//
//     return 0;
// }

//problem 19
// int main() {
//     int a, b, c;
//
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;
//
//     cout << ((a > b) && (a > c)) << endl;
//
//     return 0;
// }

//problem 20
// int main() {
//     int a, b, c, d, e;
//     cin >> a >> b >> c >> d >> e;
//
//     int result = (a >= 0) || (b >= 0) || (c >= 0) || (d >= 0) || (e >= 0);
//
//     cout << result << endl;
//
//     return 0;
// }

//problem 21
// int main() {
//     int a, b;
//     cin >> a >> b;
//     int cond1 = ( (a + b > 30) && (a * b > 30) );
//     int cond2 = ( (a + (b - 10) > 30) || (a * (b - 10) > 30) );
//     int cond3 = ( (a > 30) || (b > 30) );
//     cout << cond1 << " " << cond2 << " " << cond3 << endl;
//
//     return 0;
// }

//problem 22
// int main() {
//     double x, y;
//     cin >> x >> y;
//     double mike_cm = y * 30.48;
//     cout << (mike_cm > x) << endl;
//
//     return 0;
// }