//using namespace std; // Eviter les collisions entre une des mes fonctions qui porterait le meme nom qu'une fonction d'une librairie
					   // Le fait d'écrire std::max dit au compilateur de chercher explicitement la fonction max du namespace std::. 
					   // NE JAMAIS METTRE de using namespace std dans le main !!!
					   
class Interface_Utilisateur
{

public:
	std::string entree_clavier;
	std::string lire_entree();
	//string actualiser_ecran(string)
	
};