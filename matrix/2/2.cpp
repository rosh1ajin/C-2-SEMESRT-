#include <iostream>

using namespace std;

int Process( int ** M, size_t n, size_t m ) {
    int Sum = 0;
    for ( size_t i = 0; i < n; ++i ) {
 
        for ( size_t j = i+1; j < m; ++j ) {
            Sum += M[i][j];
        }
    }
    return Sum;
}