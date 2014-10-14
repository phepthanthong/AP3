CC=g++
DEPS=Joueur.h Piece.h  JoueurBlanc.h Echiquier.h Tour.h Cavalier.h Fou.h Pion.h
OBJ=Joueur.o Piece.o mainJ.o  JoueurBlanc.o Echiquier.o Tour.o Cavalier.o Fou.o Pion.o
EXE=main

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $<

clean:
	rm -fr *~ *.o $(EXE)
