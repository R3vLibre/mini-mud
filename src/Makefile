# Makefile pour la compilation des sources

# $@ -> target
# $^ -> tous les prérequis (liste des fichiers source à compiler) 
# $< -> le 1er prérequis 

# tabulation obligatoire (attention, pas de tabulations vides)

# Creation de l'executable grâce aux librairies c++
builddir=../bin
binaire=mini-mud

# TOUS LES MODULES SONT A AJOUTER SUR CETTE LIGNE
objets_modules=main/main_local.o interface_utilisateur/module_interface_utilisateur.o monde/module_monde.o elements_jeu/module_elements_jeu.o
objets=moteur_jeu.o

LDFLAGS+=$(shell sdl2-config --cflags)
LDLIBS+=$(shell sdl2-config --libs)

$(builddir)/$(binaire): $(builddir) $(objets) $(objets_modules)
	@echo "création de l'exécutable $@ "
#	$(LD) -r -o objet_global.o $(filter-out $(builddir),$^)
#	$(CXX) -v -o $@ objet_global.o $(LDFLAGS)  $(LOADLIBES) $(LDLIBS)
	$(CXX) $(LDFLAGS) -o $@ $(filter-out $(builddir),$^) $(LOADLIBES) $(LDLIBS)
#	g++ -lSDL2 -o $@ $(filter-out $(builddir),$^)


$(builddir):
	mkdir -p $@

# Compilation du .cpp en .o
moteur_jeu.o: moteur_jeu.cpp
	g++ -c -I ../include -o $@ $<

#main/main_local.o:
#	cd $(dir $@) && make

# $@ -> correspond à "interface_utilisateur/interface_utilisateur.o"
# $(@D) -> correspond au dossier contenant $@ //  $(@D) -> correspond à "interface_utilisateur/" (toute la partie avant le fichier)
# $(@F) -> correspond à la partiefichier de $@ // $(@F) -> correspond à "interface_utilisateur.o"
#interface_utilisateur/module_interface_utilisateur.o:
#	$(MAKE) -C $(@D)

$(objets_modules):
	$(MAKE) -C $(@D)


.PHONY: clean

# Supprimer tous les fichiers générés
clean:
	rm -f $(objets)
	rm -f $(objets_modules)
	rm -rf $(builddir)
