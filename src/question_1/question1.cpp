#include "question1.h"
#include<iostream>;

using std::cout; using std::cin;

bool test_config()
{
    return true;
}

double get_kinetic_energy(double m, double v)
{
    auto result = 0.5*m*v*v;
    std::cout<<"result: "<<result<<"\n";
    return result;
}

double get_mass()
{
    double mass;
    int error;
    do
    {
        error = 0;
        cout << "Please enter mass in kg: ";
        cin >>mass;
        if (cin.fail())
        {
            cout << "Please enter a valid number" << "\n";
            error = 1;
            cin.clear();
            cin.ignore(80, '\n');
        }
    }while(error == 1);

    return mass;
}

double get_velocity()
{
    double v;
    int error;
    do
    {
        error = 0;
        cout << "Please enter velocity in kg/s: ";
        cin >>v;
        if (cin.fail())
        {
            cout << "Please enter a valid number" << "\n";
            error = 1;
            cin.clear();
            cin.ignore(80, '\n');
        }
    }while(error == 1);

    return v;
}