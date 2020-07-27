#include <iostream>
#include <string>
using namespace std;

int main()
{

	string eingabe;
	cout << "Bitte einzeiligen Text eingeben (ohne Leerzeichen): ? ";
	getline(cin, eingabe);
	unsigned int laenge = eingabe.size();
	for (unsigned int i = 0; i < laenge; i++)
	{
		cout << "Position: " << i << " Buchstabe: " << eingabe.at(i) << endl;
	}
	system("PAUSE");
	return 0;
}