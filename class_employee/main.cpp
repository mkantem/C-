#include <iostream>

using namespace std;

class Employe {

private:
   string Name;
   string Compagnie;
   int Age;

public:
	/**< Setter and getter for Name */
   void setName(string name) {
		Name = name;
   }
   string getName() {
		return Name;
   }
   /**< Setter and getter for Compagnie */
   void setCompagnie(string compagnie) {
		Compagnie = compagnie;
   }
   string getCompagnie() {
		return Compagnie;
   }

   /**< Setter and getter for Age */
   void setAge(int age) {
		if (age>=18)
			Age = age;
   }
   int getAge() {
		return Age;
   }

   void presenteMoi() {
     cout << "Name : " << Name << endl;
	 cout << "\nCompagnie : " << Compagnie << endl;
	 if (Age!=0)
		cout << "\nAge : " << Age << endl;
	 cout << "\n********************"<< endl;
   }

   Employe(string name, string compagnie, int age){
		Name = name;
		Compagnie = compagnie;
		if (age>=18)
			Age = age;
		else Age=0;
   }
};

int main()
{
    cout << "..........Class Employe........" << endl;

    Employe employe1 = Employe("Karim", "IT Global", 15);
    /*employe1.Name = "Karim";
    employe1.Compagnie = "IT Global";
    employe1.Age = 25; */

    employe1.presenteMoi();

    Employe employe2 = Employe("Mariam", "Business Center LTD", 21);
    employe2.presenteMoi();

    employe1.setAge(15);

    if ((employe1.getAge()!=0))
			cout << employe1.getName() << " a maintenant" << employe1.getAge() << " ans " <<endl ;
		else
			cout << "L'age de " << employe1.getName() << " n'est pas specifie " <<endl ;
    return 0;
}
