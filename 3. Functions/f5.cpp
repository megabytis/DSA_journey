//Write a function to check wheather someone is eligible to vote or not 

#include <iostream>
#include <cmath> // For pow function
using namespace std;

double SIPcalc(double yROI, double duration, double investAmount)
{
    double monthlyRate = yROI / 12 / 100; // Convert yearly ROI to monthly rate in decimals
    int totalMonths = duration * 12;     // Convert years to months

    double futureValue = investAmount * (pow(1 + monthlyRate, totalMonths) - 1) / monthlyRate * (1 + monthlyRate);
    return futureValue;
}

int main()
{
    double yROI, duration, investAmount;

    // Input details
    cout << "Enter yearly rate of interest (in %): ";
    cin >> yROI;
    cout << "How many years do you want to invest: ";
    cin >> duration;
    cout << "Enter the amount of your investment every month: ";
    cin >> investAmount;

    // Calculate SIP future value
    double futureValue = SIPcalc(yROI, duration, investAmount);
    cout << "The final future value will be: ₹" << futureValue << endl;

    return 0;
}
