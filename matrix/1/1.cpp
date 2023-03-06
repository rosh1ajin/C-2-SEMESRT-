#include <iostream>

using namespace std;

int a[4][6], min_el_j, min_el;
for(int i=0;i<4;i++){
    for(int j=0;j<6;j++){
        if(a[i][j]<min_el){
            min_el = a[i][j];
            min_el_j = j;
         }
     }
}
for(int i=0;i<4;i++){
    a[i][min_el_j] = 0;
}