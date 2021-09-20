#include <iostream>
#include <cmath>

using namespace std;

// The factorial function

int factorial(int n)
{
    int result = 1;

    if (n == 0 || n < 0){
        cout << n << "!" << " = " << "0" << endl;
    }else
    {
        for (int i = 1; i <= n; i++){
            result = result * i;
        }
    }
    return result;
}

// Declaring the sterlingFirstKind function for the sterling first kind number

int sterlingFirstKind(unsigned int numberOfObjects, unsigned int numberOfCircles)
{
    if (numberOfCircles == 0 && numberOfObjects >= 1)
    {
        cout << "s(" << numberOfObjects << ", 0) = 0" << endl;
    } else if ( numberOfCircles == numberOfObjects && numberOfCircles >= 0)
    {
        cout << "s(" << numberOfObjects << ", " << numberOfCircles << ") = 1" << endl;
    } else if (numberOfObjects >= 2 && numberOfCircles == 1)
    {
        return factorial(numberOfObjects - 1);
    } else if (numberOfCircles == numberOfObjects - 1 && numberOfObjects >= 2)
    {
        int result = factorial(numberOfObjects) / (factorial(2) * factorial(numberOfObjects -2));
        return result;
    } else
    {
        int result2 = sterlingFirstKind(numberOfObjects,numberOfCircles);
        result2 = sterlingFirstKind(numberOfObjects - 1, numberOfCircles - 1) + (numberOfObjects - 1) * sterlingFirstKind( numberOfObjects - 1, numberOfCircles);
        return result2;
    }
}


int main()
{

    cout << sterlingFirstKind(12, 1) << endl;
    cout << factorial(11) << endl;
    return 0;
}

