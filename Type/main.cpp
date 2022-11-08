#include <iostream>

using namespace std;

int main()
{
   //Common types in C++

    int anneeDeNaissance = 2000;
    float moyenne = 4.5;
    bool estMajeur = true;
    char gender ='f';
    double balance = 5288888544555255;

    cout <<"Size of int " << sizeof(int) << " bytes"<<endl;
    cout <<"\nSize of float " << sizeof(float) << " bytes"<<endl;
    cout <<"\nSize of bool " << sizeof(bool) << " bytes"<<endl;
    cout <<"\nSize of char " << sizeof(char) << " bytes"<<endl;
    cout <<"\nSize of double " << sizeof(double) << " bytes"<<endl;
    cout <<"\nSize of unsigned int " << sizeof(unsigned int) << " bytes"<<endl;
    // -1, -2, -3......-2147483648
    cout << "MIN value of an int " << INT_MIN << endl;
	// 0, 1, 2, 3......2147483647
	cout << "MIN value of an int " << INT_MAX << endl;
	cout << "\nMax value of an unsigned int " << UINT_MAX << endl;
    int maximum = INT_MAX;
    maximum++;
    cout << maximum;

    cin.ignore();
    cin.get();
    return 0;
}



