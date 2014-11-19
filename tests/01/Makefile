                      ##############################
                      # Makefile pour les tests 01 #
                      ##############################


# S'il n'est pas déjà défini, définition du répertoire contenant les sources 
# du projet au répertoire courant du lancement de make
ifeq ($(strip $(srcdir)),)
srcdir:=$(CURDIR)/../..
export srcdir
endif

include make.config

src=$(srcdir)/src
src_reseau=$(src)/communication/reseau

test_client: client.o $(src_reseau)/com_client.o
	$(LD) -o $@ $^


%.o: %.c
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $^ -o $@

client.o: client.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $^ -o $@ 

$(src_reseau)/com_client.o: $(src_reseau)/com_client.c
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $^ -o $@ 


client.cpp: client.h
