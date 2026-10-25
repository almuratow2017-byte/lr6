#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    double R2 = pow(a, b);
    const double pi = 3.14;
    double S = 4 * pi * R2;
    cout << fixed << setprecision(0) << "S=" << S << "\n";
    int c;
    int d;
    scanf_s("%d", &c);
    scanf_s("%d", &d);
    double V = (4.0 / 3.0) * pi * pow(c, d);
    cout << fixed << setprecision(0) << "V=" << V << "\n";
    return 0;
}
