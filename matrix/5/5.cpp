#include <iostream>

using namespace std;
int min = 0;
for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(min > B[j][i])
            min = B[j][i];
    }
}
 
int max;
for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        
        max = min;
        for(int l=0;l<n;l++){
            if(B[j][l] > max);
                max = B[j][l]
        }
 
        /* получаем новую матрицу */
        C[j][i] = A[j][i] * max;
    }
}

