#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
   double x1, x2;

   cout << "type 3 numbers. \n";
   cin >> a >> b >> c;

   x1 = (-b + sqrt (pow(b,2) - 4 * a * c )) / (2 * a);
   x2 = (-b - sqrt (pow(b,2) - 4 * a * c )) / (2 * a);
   
   cout << setprecision(2) << fixed;
   
   if (x1 > x2) {
    cout << x1 << ", " << x2 << endl;
   } else {
    cout << x2 << ", " << x1 << endl;
   }

    return 0;
}
