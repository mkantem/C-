#include <iostream>
#include "Employe.hpp"
using namespace std;

int main()
{
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
   employe2.setCompagnie("Telecel");
   employe2.PresenteMoi();
   return 0;
}
