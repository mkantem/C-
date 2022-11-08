#include <iostream>

using namespace std;

int main()
{
    char C1, C2, C3, C4, C5;

    cout<< "Inserez un mot de cinq lettres \t";
    cin >>C1>>C2>>C3>>C4>>C5;

	cout <<"Equivalent en ASCII "<< int(C1) << " " << int(C2)
	 << " "  << int(C3)<< " " << int(C4)<< " " << int(C5)<< endl;
    /*cout << int('a') << endl;
	cout << int('A') << endl;
	cout << char(65) << endl;*/
    cin.ignore();
    cin.get();
    return 0;
}
