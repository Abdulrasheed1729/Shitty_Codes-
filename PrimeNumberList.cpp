#include <iostream>
#include <cstdio>

using namespace std;

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  +  A C++ Program to check if a number and also to list out the prime numbers less than a nummber +
  +   We make use of the Sive of Erastothenes for this program                                     +
  +                                                                                                +
  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */


  // This is the function to check if a number is prime.

bool prime(int num)
{
    int  i = 2;
    bool isPrime = true;
/*
    cout << "Please enter a number: ";
    cin >> num;
*/
    if(num == 0 || num == 1){
        cout << "Not a prime" << endl;;
    }else{
        for(i = 2; i <= num/2; i++){
            if(num % i == 0){
                isPrime = false;
                break;
        }
    }
    }


    if(isPrime){
        //cout << num << " is prime" << endl;
        return true;
    }else{
        //cout << num << " is not prime" << endl;
        return false;
    }

}

// The function to sieve out the prime numbers less than an given positve integer greater that 1.

int sieve(int num1)
{
    if(num1 == 0 || num1 == 1){
        cout << "There is no prime in between them." << endl;
    }else{
        for(int i = 2; i <= num1; i++)
            if(prime(i)){
                cout << i << endl;
            }/*else{
                break;
            }*/
    }

    return 0;
}

int main()
{
    cout << sieve(300) << endl;
    printf("Hello world");

    return 0;
}

