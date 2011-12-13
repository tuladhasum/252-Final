OBJECTS=	main.o token.o 
CC = g++

LFLAGS= 
CFLAGS= 
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o:		main.cpp token.h 
		$(CC) $(CFLAGS) -c main.cpp
token.o:	token.cpp token.h
		$(CC) $(CFLAGS) -c token.cpp
clean:
		rm -rf  *.o $(EXE) core.*

