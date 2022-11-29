#include <iostream>
using namespace std;

/**< Declaration de la fonction */
void presenteMoi(string nom, string prenom, string ville, int age);
string obtenirChaine(string description);
int obtenirInt(string description);

int main()
{
	string nom,prenom, ville;
	int age;

    nom = obtenirChaine("Nom");
	prenom = obtenirChaine("Prenom");
	ville = obtenirChaine("Ville");
	age = obtenirInt("Age");

	presenteMoi(nom,prenom,ville,age);


    cin.ignore();
    cin.get();
	return 0;
}

void presenteMoi(string nom, string prenom, string ville, int age) {
   cout << "*********************** " << endl;
   cout << "Mon nom est " <<nom << endl;
   cout << "Mon prenom est " <<prenom << endl;
   cout << "J'habite " <<ville << endl;
   if (age!=0)
		cout << "J'ai " <<age << " ans " << endl;
}

string obtenirChaine(string description){
	 string valeur;
	 cout<<description << " : ";
	 cin>>valeur;
	 return valeur;
}

int obtenirInt(string description){
	 int valeur;
	 cout<<description << " : ";
	 cin>>valeur;
	 return valeur;
}

