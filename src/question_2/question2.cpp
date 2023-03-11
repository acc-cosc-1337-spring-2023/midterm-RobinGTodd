#include "question2.h"
#include<string>
#include <cmath>

using std::string;

bool test_config()
{
    return true;
}

double get_dna_p_distance(string dna1, string dna2)
{
    double count = 0;
    for (int i = 0; i < dna1.length(); i++)
    {
        if (dna1[i] != dna2[i])
        {
            count += 1;
        }
    }

    double result = count/dna1.length();
    result = std::round(result * 10000.0) / 10000.0;
    return result;
}