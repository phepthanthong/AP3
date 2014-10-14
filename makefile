CC=g++
DEPS=Joueur.h Piece.h JoueurBlanc.h JoueurNoir.h Echiquier.h Tour.h Cavalier.h Fou.h Pion.h Roi.h Reine.h
OBJ=Joueur.o Piece.o mainJ.o JoueurBlanc.o JoueurNoir.o Echiquier.o Tour.o Cavalier.o Fou.o Pion.o Roi.o Reine.o
EXE=main

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $<

clean:
	rm -fr *~ *.o $(EXE)
