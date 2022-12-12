#include <iostream>
using namespace std;

class Employe{
public:
	string m_Nom;
	string m_Compagnie;
	int m_Age;

    Employe(string nom, string compagnie, int age) {
       m_Nom = nom;
       m_Compagnie = compagnie;
       m_Age = age;
    }
    void PresenteMoi() {
	 cout <<"************************" <<endl;
	 cout <<"\nNom : " << m_Nom <<endl;
	 cout <<"\nCompagnie : " << m_Compagnie <<endl;
	 cout <<"\nAge : " << m_Age <<endl;
    }

};
int main()
{
   //int a;
   Employe employe1 = Employe("Diarra", "Amazon", 25);
   /*employe1.m_Nom = "Diarra";
   employe1.m_Compagnie = "Amazon";
   employe1.m_Age = 25; */

   employe1.PresenteMoi();

   Employe employe2 = Employe("Soliba", "Google", 18);
   /*employe2.m_Nom = "Coulibaly";
   employe2.m_Compagnie = "Google";
   employe2.m_Age = 18; */

   employe2.PresenteMoi();
    return 0;
}
