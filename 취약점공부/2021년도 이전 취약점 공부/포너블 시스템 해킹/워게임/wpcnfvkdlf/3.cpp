//Q3
/*
#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    int i = 0;
    const int arrsize = 3;
    const char* arr[3] = { "abc","def","ghi" };
    char temp[20] = "";

    cout << "char* arr[3] = { \"abc\", \"def\", \"ghi\"}; " << endl;

    strcat(temp, *arr);
    strcat(temp, *(arr + 1));
    strcat(temp, *(arr + 2));

    cout << "temp[20] = " << temp;
}
*/