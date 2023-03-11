#include "question1.h"
#include<iostream>;

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