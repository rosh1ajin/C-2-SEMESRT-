#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("in.txt");
    if (!fin.is_open()){
        cout << "error";
        return 0;
    }

    double start;
    fin >> start;
    double end;
    fin >> end;
    double step;
    fin >> step;
    double param;
    fin >> param;

    ofstream fout("out.txt");
    if (!fout.is_open()){
        cout << "error";
        return 0;
    }

    for (double x = start; x <= end; x += step){
        double y = 0;
        double coef = 7;
        bool plus = true;
        while (coef <= 11){
            if (plus){
                y += coef * x;
            }
            else{
                y -= coef * x;
            }
            coef += 2;
            plus = !plus;
        }
        y += param * x;

        fout << x << " " << y << endl;
    }

    fin.close();
    fout.close();

    return 0;
}