#include "sum_square_difference.h"

#include <cmath>

// max = 100, answer = 25164150
long long sum_square_difference(unsigned max) {

    long long first = 0;
    long long second = 0;

    for (int i = 0; i <= max; ++i) {
        first += pow(i, 2);
        second += i;
    }
    second = pow(second, 2);

    return second - first;
}