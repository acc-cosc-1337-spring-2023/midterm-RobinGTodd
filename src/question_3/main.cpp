#include<iostream>
#include<string>
#include "question3.h"

using std::cout; using std::cin; using std::string;

int main()
{
    char exit_condition='n';
    string binary_str;

    do
    {
        binary_str = get_binary_str();
        cout<<"Result: "<<binary_to_decimal(binary_str)<<"\n";

        cout<<"exit? (y/n): \n";
        cin>>exit_condition;
    } 
    while(exit_condition=='n');
    return 0;
}