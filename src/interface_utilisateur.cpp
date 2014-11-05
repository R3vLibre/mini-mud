#include <iostream>
#include "interface_utilisateur.h"

std::string Interface_Utilisateur::lire_entree() // j'ai dans la class utilisateur une fonction qui s'appelle lire_entree
{
    std::cin >> entree_clavier;
	return entree_clavier;
};

//iu = interface_utilisateur()
//iu.entree_clavier
//interface_utilisateur::fonction_h() // accéder a une methode de classe plutot qu'a une methode d'objet

/*

class complexe {
float i,j;
cmp(complexe) {
  cout << this->i;}
cmp_2complexes(complexe, complexe) {
  cout << this->i;}
convertir_float(float){  cout << this->i;}
}

c1=new complexe();
c2=new complexe();

c1.cmp(c2);
complexe::cmp_2complexes(c1, c2);
c1.cmp_complexe(c1, c2);
float_complexe = complexe::convertir_float(decimale);

 */