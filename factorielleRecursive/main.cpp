#include <iostream>

using namespace std;

/** \brief Fonction recursive qui calcule la factorielle d'un entier
 *
 * \param nombre
 *
 * \return int
 *
 */

int factorielle(int nombre);

int main()
{
	int nombre, fact;
    cout << "***************" << endl;
    cout << "Nombre: ";
    cin>>nombre;

    /**< Appel de la fonction */
    fact = factorielle(nombre);

    if (fact == (-1))
		cout <<"\nNombre negatif";
    else
		cout << "\nLa factorielle de "<< nombre << " est " << fact <<endl;
    return 0;
}

/**< Implementation de la fonction recursive factorielle */
int factorielle(int nombre) {

/**< SI le nombre est négatif */
     if (nombre <0)
		return (-1);

	if (nombre == 0) {   /**< Arrêt */
		return (1);
	} else {
		return (nombre * factorielle(nombre-1));
	}
}
