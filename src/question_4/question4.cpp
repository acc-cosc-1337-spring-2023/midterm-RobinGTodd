#include<string>
#include<iostream>
#include<sstream>

using std::string; using std::cout; using std::stringstream; using std::cin;
//
bool test_config()
{
    return true;
}

string int_to_string(int i)
{
    stringstream ss;
    ss << i;
    return ss.str();
}

string get_factorial_sequence(int num)
{
    string result = "1";
    int result_eq = 1;

    for (int i = 2; i <= num; i++)
    {
        result += "x";
        result += int_to_string(i);

        result_eq *= i;
    }
    return result + "=" + int_to_string(result_eq);
}

int get_user_input()
{
    bool error = false;
    int user_input;

    do
    {
        cout<<"Enter a number between 1 and 10:\n";
        cin>>user_input;
        

        if (cin.fail())
        {
            cout<<"Invalid input. Number must be an integer.\n\n";
            cin.clear();
            cin.ignore(80, '\n');
            error = true;
        }
        else if (user_input < 1 || user_input > 10)
        {
            cout<<"Invalid input. Number must be between 1 and 10.\n\n";
            cin.clear();
            cin.ignore(80, '\n');
            error = true;
        }
        else 
        {
            error = false;
        }
    } while (error);
    return user_input;

}