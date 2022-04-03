//Q1
/*
#include <iostream>

using namespace std;

void printarrAdv(int* arr, int length);

int main()
{
    int array[5] = { 10,20,30,40,50 };
    int* v;
    v = array;
    printarrAdv(v, 5);
}
void printarrAdv(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        cout << "arr + " << i << " : " << arr + i << endl;
    }
    cout << "\n\n";
    for (int j = 0; j < length; j++) {
        cout << "&arr[" << j << "] : " << arr + j << endl;
    }
    cout << "\n\n";
    for (int k = 0; k < length; k++) {
        cout << "*(arr + " << k << ") : " << *(arr + k) << endl;
    }
    cout << "\n\n";
    for (int n = 0; n < length; n++) {
        cout << "arr[" << n << "] : " << arr[n] << endl;
    }
}

*/