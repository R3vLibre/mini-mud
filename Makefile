# Projet de mini-mud: Utilisation de la librairie SDL
#
# Makefile: Compilation et installation du projet mini-mud avec la librairie SDL
#
# Objectif: Apprendre à construire un Makefile dans le cadre d'un projet
#
# Auteurs et Licence: Ce projet est un logiciel libre sous licence GNU GPL,
#                     voir les fichiers "Authors" et "License" pour les détails.

$(info echo "* Chargement de ./Makefile")
## Définition et import du fichier de paramétrage des Makefile du projet
export config_make:=Makefile.config
include $(config_make)

## Définition des chemins spécifiques à la compilation
# rootdir: chemin vers la racine du projet, pour les Makefile successifs
export rootdir:=$(dir $(realpath $(firstword $(MAKEFILE_LIST))))
# Chemins vers des composantes spécifiques du projet:
# srcdir: chemin vers le code source
export srcdir=$(join $(rootdir),src/)
# buildir: chemin où créer les binaires
export builddir=$(join $(rootdir),bin/)
# testdir: chemin où sont localisés les tests
testsdir=tests

# Binaires du projet: un seul binaire, celui du jeu lui-même
executables=mini-mud
export binaires:=$(foreach bin, $(executables), $(join $(builddir),$(bin)))

.PHONY: all
all: build doc

.PHONY: build doc
build: $(builddir)
	@echo "Compilation du projet $(PACKAGE)"
	$(MAKE) -C $(srcdir)

doc:
	@echo "Génération de la documentation du projet $(PACKAGE)"

$(builddir):
	@echo "Création du chemin 'builddir': '$@'"
	@mkdir -p $@

.PHONY: install install-bin install-doc
install: install-bin install-doc

install-bin: $(binaires)
	@echo "Installation des binaires sous $(bindir)"

install-doc:


.PHONY: uninstall
uninstall:


.PHONY: clean distclean
clean:
	@echo "Nettoyage du projet"
	@rm -rf $(builddir)
	@$(MAKE) -C $(srcdir) $@

distclean: clean
	@echo "Nettoyage des fichiers d'initialisation"
	@rm -f $(config_make)

.PHONY: check
check:
	@echo "Lancement des tests..."
#       Note: formule équivalente à: $(MAKE) -C $(testsdir)
	@cd $(testsdir) && $(MAKE) $@

.PHONY: dist
dist:
	@echo "A faire: création de 'package-version.tar.gz' à partir des sources"
