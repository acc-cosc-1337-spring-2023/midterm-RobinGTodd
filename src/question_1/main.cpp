#include<iostream>
#include "question1.h"

using std::cout; using std::cin;

int main()
{
    double m;
    double v;
    char exit_condition = 'n';
    cout<<"Kinetic Energy Calculator\n";
    do 
    {
        cout<<"Enter a mass (kg)\n";
        cin>>m;
        cout<<"Enter a velocity (m/s)\n";
        cin>>v;
        cout<<"Kinetic Energy: "<<get_kinetic_energy(m, v)<<"\n";
        cout<<"\n exit? (y/n)\n";
        cin>>exit_condition;
        cout<<"\n";

    }
    while(exit_condition != 'y');
    return 0;
}