#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void doubleDigits(int number){
    while(number > 0){
        int a = number % 10;
        int double_digit = a * 2;
        cout << "Separated digit doubled : " << double_digit << endl;
        number = number / 10;
    }
}

int sumOfDoubleDigits(int number){
    int sum = 0;
    while(number > 0){
        int a = number % 10;
        int double_digit = a * 2;
        sum = sum + double_digit;
        number = number / 10;
    }
    return sum;
}

int main()
{
    string ID = "BC123456789";
    string digits = ID.substr(2);
    int digitPart = atoi(digits.c_str());

    cout << "The given student ID is " << ID << endl;
    cout << "Given student ID digit part is " << digits << endl;

    doubleDigits(digitPart);
    int sum = sumOfDoubleDigits(digitPart);
    cout << "Sum of separated doubled digits " << sum << endl;

    return 0;
}