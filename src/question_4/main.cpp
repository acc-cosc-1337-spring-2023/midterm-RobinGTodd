#include "question4.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    char exit_condition = 'n';
    do
    {
        int user_input = get_user_input();
        cout<<"Result: "<<get_factorial_sequence(user_input)<<"\n";

        cout<<"Exit? (y/n)\n";
        cin>>exit_condition;
        cout<<"\n\n";
    }
    while (exit_condition == 'n');

    return 0;
}