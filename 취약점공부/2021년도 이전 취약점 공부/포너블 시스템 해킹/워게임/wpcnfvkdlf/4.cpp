//Q4
#include<iostream>
#include<cstring>

using namespace std;

void find(char[], char, int);

static int i = 0;

int main()
{
    int number = 0;
    char str[] = "abcdavcda";
    find(str, 'a', number);
}

void find(char str[], char a, int i) {
    int j = 1;
    while (str[i] != '\0') {
        if (str[i] == 'a') {
            cout << "index of " << j << "번째 a : " << i << endl;
            i++;
            j++;
        }
        if (str[i] == '\0') {
            cout << "index of " << j << "번째 a : " << -1 << endl;
        }
        i++;

    }
}
