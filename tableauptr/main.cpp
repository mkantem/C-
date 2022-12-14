#include <iostream>
using namespace std;

int main()
{
	//Tableau de 5 elements
   int nombrePair[5] = {2, 86, 60, 12, 10};

   //Addresse
   cout << nombrePair << endl;
   cout << &nombrePair[0] << endl;

   //dereferencement
   cout << *(nombrePair+2) << endl;
   cout << nombrePair[2] << endl;
   return 0;
}
