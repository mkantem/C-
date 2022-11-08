#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float blablabla;
    cout << "Entrez SVP votre salaire annuel ";
    cin>>blablabla;
	cout<<"\nLe salaire mensuel est " << blablabla/12 <<endl;
	cout<<"\nVous gagnerez dans 10 ans "  << blablabla *10;

    cin.ignore();
    cin.get();
    return 0;
}

