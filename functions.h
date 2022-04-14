#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double Sum(double& x, double& y)
{
    double sum = x + y;
    cout << sum << endl;
    return 0;
}

double Subtract(double& x, double& y)
{
    double sub = x - y;
    cout << sub << "\n";
    return 0;
}

double Divide(double& x, double& y)
{
    double div = x/y;
    cout << div << "\n";
    return 0;
}

double Multiply(double& x, double& y)
{
    double mult = x * y;
    cout << mult << "\n";
    return 0;
}