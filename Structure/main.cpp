#include <iostream>
int main()
{
   // IF Simple
   using std::cout;
   using std::cin;
   using std::endl;
   int age;

   cout <<"Entrez SVP votre age : " <<endl;
   cin>>age;

   if (age>=18) {
	cout<<"\nVous etes majeur " <<endl;
   }
    else {
	cout<<"\nVous etes mineur " <<endl;
    }

    cout <<"\nFin du programme ";

    /*************
     Il convient de noter que toute instruction peut
    être utilisée dans une clause if ou else, même une
    autre clause if ou else.
     *************/
    return 0;
}
