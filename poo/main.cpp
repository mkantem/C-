#include <iostream>
#include "Employe.hpp"
using namespace std;

int main()
{
   /*Employe employe1 = Employe("Diarra", "Amazon", 25);
   Employe employe2 = Employe("Soliba", "Google", 18);

   employe1.DemandePromotion();
   employe2.DemandePromotion(); */
   Developer dev = Developer("Soungalo", "Apple", 25, "Kotlin");
   dev.FixBugs();
   dev.DemandePromotion();

   Enseignant ens = Enseignant("Diarra", "Cool School",35, "Physique");
   ens.PrepareCours();
   ens.DemandePromotion();

   dev.Work();
   ens.Work();

  //parent fait ref à un objet fils
   Employe* e1 = &dev;
   Employe* e2 = &ens;

   e1->Work();
   e2->Work();

   return 0;
}
