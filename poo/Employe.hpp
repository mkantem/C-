#include <iostream>
#include "Abstract.hpp"
using namespace std;

class Employe:AbstractEmploye {
private:
	//string m_Nom;
	string m_Compagnie;
	int m_Age;
protected:
	string m_Nom;
public:
    Employe(string nom, string compagnie, int age);
    ~Employe();
	string getNom() const;
	void setNom(string nom);
    string getCompagnie() const ;
    void setCompagnie(string compagnie);
    int getAge() const;
    void setAge(int age);
    void PresenteMoi() const;
    void DemandePromotion();
    //polymorphisme
    virtual void Work() {
		cout << m_Nom <<" regarde les mails, logs, rapports, documents, ......" <<endl;
    }

};

class Developer: public Employe {
string m_FavLangage;

public:
	Developer(string nom, string compagnie, int age, string fav)
	  :Employe(nom,compagnie,age){
	  	m_FavLangage = fav;
	   }

 void FixBugs() {
	cout << getNom() << " fixe les probleme en utilisant " << m_FavLangage <<endl;
 }

 void Work() {
		cout << m_Nom <<" fait du code avec "<< m_FavLangage <<endl;
    }

};

class Enseignant: public Employe {
public:
	string m_Module;

     Enseignant(string nom, string compagnie, int age, string module)
	  :Employe(nom,compagnie,age){
	  	m_Module = module;
	   }
	void PrepareCours() {
    cout << getNom() << " prepare le module " << m_Module <<endl;
 }

 void Work() {
		cout << m_Nom <<" enseigne "<< m_Module <<endl;
    }
};


