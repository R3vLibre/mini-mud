# Makefile pour la compilation des sources

# $@ -> target
# $^ -> tous les prérequis (liste des fichiers source à compiler)
# $< -> le 1er prérequis

objets=monde.o monde_carte.o

# creer un module qui concatene tous les objets .o créés indivuduellement
module_monde.o: $(objets)
	$(LD) -r -o $@ $^

# $(CXX) -> correspond par défaut à g++
CXXFLAGS+=-I ../../include

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

