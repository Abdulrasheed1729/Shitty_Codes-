#include <iostream>

using namespace std;

int main()
{
    double basicSalary, transportAllowance, housingAllowance, launchAllowance, grossAllowance, tax, netSalary;
    cout << "Enter the basic salary: ";
    cin >> basicSalary;
    transportAllowance = (15.0/100.0) * basicSalary;
    housingAllowance = (8.0/100.0) * basicSalary;
    launchAllowance = 0;
    tax = (6.0/100.0) * basicSalary;
    if(basicSalary > 500){
        launchAllowance = (5.0/100.0) * basicSalary;
    }

    grossAllowance = basicSalary + transportAllowance + housingAllowance + launchAllowance;
    netSalary = grossAllowance - tax;

    cout << "Basic salary = $" << basicSalary << endl;
    cout << "Transport allowance = $" << transportAllowance << endl;
    cout << "Housing allowance = $" << housingAllowance << endl;
    cout << "Launch allowance = $" << launchAllowance << endl;
    cout << "Gross allowance = $" << grossAllowance << endl;
    cout << "Tax = $" << tax << endl;
    cout << "Net salary = $" << netSalary << endl;
    return 0;
}
