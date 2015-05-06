# Makefile pour la compilation des sources

# $@ -> target
# $^ -> tous les prérequis (liste des fichiers source à compiler)
# $< -> le 1er prérequis

objets=interface_utilisateur.o interface_utilisateur_entrees.o

# creer un module qui concatene tous les objets .o créés indivuduellement
module_interface_utilisateur.o: $(objets)
	$(LD) -r -o $@ $^

# $(CXX) -> correspond par défaut à g++
CXXFLAGS+=-I ../../include

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

#interface_utilisateur.o: interface_utilisateur.cpp
#	g++ -c -I ../../include -o $@ $<

#interface_utilisateur_entrees.o: interface_utilisateur_entrees.cpp
#	g++ -c -I ../../include -o $@ $<

#interface_utilisateur_sorties.o: interface_utilisateur_sorties.cpp
#	g++ -c -I ../../include -o $@ $<

