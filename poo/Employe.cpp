#include <iostream>
using namespace std;
#include "Employe.hpp"

Employe::Employe(string nom, string compagnie, int age) {
       m_Nom = nom;
       m_Compagnie = compagnie;
       m_Age = age;
}
Employe::~Employe(){
	cout <<"ICI DESTRUCTION" <<endl;
}

string Employe::getNom() const{
	  return m_Nom;
	}
void Employe::setNom(string nom){
	m_Nom = nom;
	}
string Employe::getCompagnie() const{
      return m_Compagnie;
}

void Employe::setCompagnie(string compagnie){
    	m_Compagnie = compagnie;

	}

	 int Employe::getAge() const{
      return m_Age;
    }
void Employe::setAge(int age){
    	m_Age = age;
    }
void Employe::PresenteMoi() const {
	 cout <<"************************" <<endl;
	 cout <<"\nNom : " << m_Nom <<endl;
	 cout <<"\nCompagnie : " << m_Compagnie <<endl;
	 cout <<"\nAge : " << m_Age <<endl;
    }
 void Employe::DemandePromotion() {
	 if (m_Age > 30)
		cout << m_Nom << "Congratulations on your promotion!!" <<endl;
     else
		cout << m_Nom << "Deeply sorry, No promotion this time" <<endl;

		}
