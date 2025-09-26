// #include <iostream>
// using namespace std;

//problem11
// int main() {
//     int numpos = 0, numneg = 0;
//     int x, total = 0, num;
//     float average;
//     cin >> x;
//     while (x !=0) {
//         total += x;
//         if (x > 0)
//             numpos++;
//         else
//             numneg++;
//         cin >> x;
//     }
//     num = numpos + numneg;
//     average = total / num;
//     cout << "The number of positives is " << numpos << endl;
//     cout << "The number of negatives is " << numneg << endl;
//     cout << "The total is " << total << endl;
//     cout << "The average is " << average << endl;
//     return 0;
// }

//problem12
// int main() {
//     int star;
//     cin >> star;
//     for (int i = 1; i <= star; i++) {
//         for (int j = 1; j <= star; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//problem13
// int main() {
//     int n;
//     cin >> n;
//
//
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

//problem14
// int main() {
//     int n;
//     cin >> n;
//
//     if (n == 0)
//         cout << "Output: The depth is 0" << endl;
//     else {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout << i;
//             }
//             cout << endl;
//         }
//     }
//
//     return 0;
// }

//problem15
// int main() {
//     int a;
//     float sum = 0.0;
//     cin >> a;
//     for (int i = 1; i <= a; i++) {
//         sum = sum + (1.0/i);
//         if (i==a) {
//             cout << "1/" << i << endl;
//         }
//         else
//             cout << "1/" << i << "+";
//     }
//     cout << "the sum is " << sum << endl;
//     return 0;
//
//     }

//problem16
// int main() {
//     float rent = 1000.0;
//     int totalAllYears = 0;
//
//     for (int year = 1; year <= 5; year++) {
//         cout << "For year number " << year << " rent is " << rent << endl;
//         float totalYear = rent * 12;
//         cout << "The total for year " << year << " is " << totalYear << endl;
//         totalAllYears += totalYear;
//         rent = rent + (rent * 0.03);
//     }
//
//     cout << "For all 5 years total rent is " << totalAllYears << endl;
//
//     return 0;
// }

//problem17
// int main() {
//     int n;
//     cin >> n;
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     cout << "The sum of digits is " << sum << endl;
//     return 0;
// }

//problem18
// int main() {
//     int binary;
//     cin >> binary;
//
//     int decimal = 0, base = 1;
//     while (binary > 0) {
//         int lastDigit = binary % 10;
//         decimal += lastDigit * base;
//         base *= 2;
//         binary /= 10;
//     }
//
//     cout << "The decimal number is " << decimal << endl;
//     return 0;
// }

//problem19
// int main() {
//     int n;
//     cin >> n;
//     while (n % 2 == 0) {
//         cout << 2 << " ";
//         n /= 2;
//     }
//     for (int i = 3; i * i <= n; i += 2) {
//         while (n % i == 0) {
//             cout << i << " ";
//             n /= i;
//         }
//     }
//     if (n > 2) {
//         cout << n;
//     }
//
//     cout << endl;
//     return 0;
// }
