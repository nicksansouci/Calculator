#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;




int main()
{
    double x {};
    string o;
    double y {};
    cout << "First number: " << endl;
    cin >> x;
    cout << "Operator: " << endl;
    cin >> o;
    cout << "Second number: " << endl;
    cin >> y;

    if (o == "+")
    {
        Sum(x, y);
    }
    if (o == "-")
    {
        Subtract(x, y);
    }
    if (o == "/")
    {
        Divide(x, y);
    }
    if (o == "*")
    {
        Multiply(x, y);
    }
    else
    {
        cout << "Please type a valid operator."<< "\n";
    }
}
