#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double weight;
    double distance;
    double rate;
    double totalCharge;
    int shippingUnits;
//user input section 1
    cout << "Enter the weight of the package (kg): ";
    cin >> weight;

    cout << "Enter the shipping distance (miles): ";
    cin >> distance;

//validate, section 2
    if (weight <= 0 || weight > 20)
    {
        cout << "Error: Weight must be greater than 0 and no more than 20 kg." << endl;
    }
    else if (distance < 10 || distance > 3000)
    {
        cout << "Error: Distance must be between 10 and 3000 miles." << endl;
    }
    else
    {
// calculate shipping rate section 3
        if (weight <= 2)
        {
            rate = 1.10;
        }
        else if (weight <= 6)
        {
            rate = 2.20;
        }
        else if (weight <= 10)
        {
            rate = 3.70;
        }
        else
        {
            rate = 4.80;
        }
        shippingUnits = ceil(distance / 500.0);
        totalCharge = rate * shippingUnits;

//display results, section 4
        cout << fixed << setprecision(2);
        cout << "Shipping charge: $" << totalCharge << endl;
    }

    return 0;
}