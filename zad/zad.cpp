#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int Number;
    int Choice;
    
    cout << "Введите размер массива:" << " ";
    cin >> Number;

    int *Arr = new int[Number];

    srand(time(NULL));
        for (int i = 0; i < Number; i++) {
            Arr[i] = rand();
                cout << "|" << Arr[i] << "| ";
        }

    cout << endl;
    cout << "Введите элемент массива (элементы массива начинаются с 0!), который хоитите удалить:" << " ";
    cin >> Choice;

        for (long i = Choice; i < Number - 1; ++i) {
                Arr[i] = Arr[i + 1];
        }
     --Number;

        for (int i = 0; i < Number; i++) {
                cout << "|" << Arr[i] << "| ";
        }

    delete[] Arr;
    return 0;
}