//TEAM MEMBER :
//Mustafa Baig(21F - 9257)
//ABDUL MUTAAL(21F - 9166)
#include<windows.h>
#include<iostream>
#include<conio.h>
#include<string>
#include "TextEditor.h"
#include<cstring>
using namespace std;
int main() {
	system("color 7C");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t TEXT EDITOR WITH AUTOMATED SUGGESTIONS" << endl;
	Sleep(500);
	cout << "\t\t\t";
	for (int s = 1; s < 5; s++) {
		Sleep(50);
		cout << ".................";
	}
	system("cls");
	system("color 7C");
	TextEditor TE("D.txt");
	TE.Editing();
	return 0;
}