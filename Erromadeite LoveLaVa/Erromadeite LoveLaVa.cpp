#include "Erromadeite LoveLaVa.h"

using namespace std;

int main()
{
	system("title Erromadeite LoveLaVa - Terminal Demo ");
	cout << "Erromadeite LoveLaVa - Terminal Demo \n";
	while (1) {
		string comando;
		cout << "> ";
		getline(cin, comando);
		comanddetect(comando);
	}
	return 0;
}
