##
## EPITECH PROJECT, 2023
## ProjectPerso
## File description:
## Makefile optimisé
##
#Variable

cc = gcc #Défini une variable avec le nom du compilateur
EXEC = .prog #Défini une variable avec le nom du programme
Dossier_cache = .fichier_o/
Z = /

#Variables dynamiques

dossier_courant= $(pwd) #chemin absolu du dossier courant
FichierC = $(wildcard *.c) #wildcard permet de lister tous les fichiers .c
FichierO = $(FichierC:.c=.o) #Récupère les fichiers .c contenu dans FichierC et changer les extensions en .o

#Commande

all :Lib

%.o : %.c
	$(cc) -o $@ -c $<

$(EXEC):
	@ make spawno
	@ make exec
	@ make dispawno

exec : $(FichierO)
	$(cc) -o $(EXEC) $^
Lib:
	@ make spawno
	@ make lib
	@ make dispawno
lib:$(FichierO)
	ar rcs libmy.a $^
spawno :
	@ cp -u $(Dossier_cache)*.o .
dispawno :
	@ cp -u $(FichierO) $(Dossier_cache)
	@ rm -f $(FichierO)
install:
	mkdir -p $(Dossier_cache)
clone:
	@ echo "Merci de rentrer l'adresse ssh du git"
	@ read -p "Adresse SSH" cle; \
	$(shell) git clone "$$cle"
push:
	@ make install
	@ make clone

ask_user_input:
	@read -p "Entrez quelque chose : " user_input; \
	echo "Vous avez saisi : $$user_input"

#all :$(EXEC)
#	echo "\nCompilation terminée !"
#%.o : %.c
#	fichier_tmp_o = $@
#	spawno
#	$(cc) -o $@ -c $<
#spawno :
#	cp -u $(Dossier_cache)/*.o .
#dispawno :
#	cp -u ./*.o $(Dossier_cache)
#$(EXEC) : $(FichierO)
#	gcc -o $@ $^ # Lie les .o en EXEC si modification des .o
#install:
#	mkdir $(Dossier_cache)
#clean :
#	rm -rf Dossier_cache
#fclean: clean
#	rm -f $(EXEC)
#re: fclean all
