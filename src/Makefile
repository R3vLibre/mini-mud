# Makefile pour la compilation des sources

# $@ -> target
# $^ -> tous les prérequis (liste des fichiers source à compiler) 
# $< -> le 1er prérequis 

# tabulation obligatoire (attention, pas de tabulations vides)

# Creation de l'executable grâce aux librairies c++
builddir=../bin
binaire=mini-mud

$(builddir)/$(binaire): $(builddir) moteur_jeu.o main/main_local.o
	@echo "création de l'exécutable $@ "
	g++ -o $@ $(filter-out $(builddir),$^)

$(builddir):
	mkdir -p $@

# Compilation du .cpp en .o
moteur_jeu.o: moteur_jeu.cpp
	g++ -c -I ../include -o $@ $<

main/main_local.o:
	cd $(dir $@) && make

.PHONY: clean

# Supprime moteur_jeu.o
clean:
	rm -f moteur_jeu.o
	rm -f main/main_local.o
	rm -rf $(builddir)