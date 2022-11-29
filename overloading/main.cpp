#include <iostream>

using namespace std;

/**< Overloading of the function somme */
int somme (int a, int b) {
   return (a+b);
}

double somme (double a, double b) {
   return (a+b);
}

float somme (float a, float b, float c) {
   return (a+b+c);
}

int main()
{
    cout << somme(2,3) << endl;
	cout << somme(2.1,3.2) << endl;

    return 0;
}
