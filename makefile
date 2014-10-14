CC=g++
DEPS=Joueur.h Piece.h JoueurNoir.h JoueurBlanc.h Echiquier.h Tour.h
OBJ=Joueur.o Piece.o mainJ.o JoueurNoir.o JoueurBlanc.o Echiquier.o Tour.o
EXE=main

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $<

clean:
	rm -fr *~ *.o $(EXE)
