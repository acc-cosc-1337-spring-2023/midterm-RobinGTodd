#include "question2.h"
#include<iostream>
#include<string>

using std::cout; using std::cin;

int main()
{
    double result = get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");
    cout<<"Result: "<<result<<"\n";
    return 0;
}