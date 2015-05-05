# Makefile pour la compilation du projet mini-mud
# Makefil -> premier usage -> Compilation
# Makefile -> Génerer un ou plusieurs fichiers automatiquement grâce à d'autres fichiers (documentation,transforme fichier textes en html...)

# Définition des variables

# Liste des "targets" à réaliser (targets -> fichier à créer ou action à faire)

# Dans le shell
# make target target1 target2 target3
# make -> réalise la première target

# Par défaut il test si le fichier existe déja (éviter de recompiler ce qui n'a pas été modifié) - le point Phony désactive ce macanisme
.PHONY: all build install

# les tabulations sont obligatoires
# make all (dans le shell) ou make (dans le shell) car c'est le premier du fichier
all: build

# make build (dans le shell)
build:
	@echo "compilation du projet mini-mud"
	$(MAKE) -C src

# make install (dans le shell)
install: 
	@echo "installation du projet mini-mud"

# clean dans src
clean: 
	$(MAKE) -C src $@
