#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int sel;
    double temp;
    
    cin >> sel;
    if (sel = 1)
    {
        cout << "Convert from Fahrenheit to Celsius" << endl;
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        temp = (temp - 32.0) * 5.0 / 9.0;
        cout << temp;
    }
    else if (sel = 2)
    {
        cout << "Convert from Celsius to Fahrenheit" << endl;
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        temp = (temp * 9.0 / 5.0) + 32.0;
        cout << temp;
    }
    else
    {
        cout << "Invalid option" << endl;
        return 0;
    }
}