//Q5

#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char array[100];
	char* tokptr;
	char* leftover = NULL;

	char test[] = "_test";

	cout << "5 word input: ";
	cin.getline(array, 100);


	tokptr = strtok(array, " ");

	while (tokptr != NULL) {
		//strcat(tokptr,test);
		cout << tokptr << endl;
		tokptr = strtok(NULL, " "); 
	}

	system("pause");

}