#include "question3.h"
#include<string>
#include<iostream>

using std::string; using std::cout; using std::cin;

bool test_config()
{
    return true;
}

int binary_to_decimal(string binary)
{
    int result = 0;
    int two_power = 1;
    int len = binary.length();
    for (int i = 0; i < 8; i++)
    {
        result += (int(binary[8-i-1])-48)*two_power;
        two_power *= 2;
    }
    return result;
}

string get_binary_str()
{
    string binary_str;
    int error;
    do
    {
        error = 0;
        cout<<"Enter binary number: ";
        cin >>binary_str;



        if (binary_str.length() != 8)
        {
            cout << "Invalid input. Number must have 8 digits." << "\n";
            error = 1;
            cin.clear();
            cin.ignore(80, '\n');
        }
        else 
        {
            for (int i = 0; i < 8; i++)
            {
                if (binary_str[i]!= '0' && binary_str[i] != '1') {
                    cout<<"Invalid input. Please enter a binary number with 1's and 0's only.\n";
                    error = 1;
                    cin.clear();
                    cin.ignore(80, '\n');
                    break;
                }
            }
        }
    }while(error == 1);

    return binary_str;
}


