#include <iostream>

using namespace std;

int main()
{
    //****** Mise en oeuvre IF simple  *******//
// Demandez d'entrer deux nombres entiers et attribuer les nombres
// � deux variables a et b
// Si a est plus grand que b, v�rifier si a est divisible par b
// Si c'est le cas, voyez s'il s'agit du m�me nombre

int a, b;
cout << "Entrez deux nombres SVP. \nPremier : ";
cin>>a;
cout << "\nSecond : ";
cin>>b;

cout <<"\nA = " << a << " et B = " <<b<< endl;

if (a>=b) {
	if (a % b == 0 ) { //divisibilit�
		if (a==b) {  //�galit�
			cout << "\nIl s'agit du m\x88me nombre " << endl; // \x88 = �
		} else {
		  cout << "\nA est divisible par B " <<endl;
		}
	} else {
		cout << "\nA n'est pas divisible par B " <<endl;
	}
} else {
	cout << "\nB est plus grand que A "<<endl;
}

cin.ignore();
cin.get();
return 0;
}
