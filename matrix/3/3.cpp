#include <iostream>
#include <ctime>
using namespace std;
 
int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int size; int summ = 0;
    cout << "количество дней";
    cin >> size;
    int *array = new int[size];
    for (int i = 0; i < size; i++)
        array[i] = rand() % 10;
    for (int i = 0; i<size; i++){
        if ((i + 1) % 10 != 0)
            summ += array[i];
        else
        {
            cout << "*" << summ + array[i] << "*";      //сумма за каждую декаду
            summ = 0;
            cout << endl;
        }
    }
    cout << endl << "Массив: " << endl;
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    system("pause");
    return 0;
}