#include <iostream>
using namespace std;

class Employe{
private:
	string m_Nom;
	string m_Compagnie;
	int m_Age;

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

};

