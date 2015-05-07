# Projet de mini-mud: Utilisation de la librairie SDL
#
# Makefile: Compilation et installation du projet mini-mud avec la librairie SDL
#
# Objectif: Apprendre à construire un Makefile dans le cadre d'un projet
#
# Auteurs et Licence: Ce projet est un logiciel libre sous licence GNU GPL,
#                     voir les fichiers "Authors" et "License" pour les détails.

$(info echo "* Chargement de src/Makefile")

nom_module := mini-mud

all: $(builddir) $(binaires)

## Import des règles génériques de compilation d'un module
include $(srcdir)/Makefile.common

## Règles spécifiques à la racine du code source
# Pour le répertoire principal, réinitialisation des modules identifiés
# pour le remplacer par les binaires à construire.

LDFLAGS += $(shell sdl2-config --cflags)
LDLIBS += $(shell sdl2-config --libs)

$(join $(builddir),$(nom_module)): $(module)
	echo "Building exec"
	$(CXX) -o $@ $(LDFLAGS) $(module) $(LOADLIBES) $(LDLIBS)



$(info "CC=$(CC)")
$(info "CCFLAGS=$(CCFLAGS)")
$(info "CXX=$(CXX)")
$(info "CXXFLAGS=$(CXXFLAGS)")
$(info "binaires=$(binaires)")
$(info "nom_module=$(nom_module)")
$(info "module=$(module)")
$(info "modules=$(modules)")
$(info "objets_modules=$(objets_modules)")
$(info "objets=$(objets)")

