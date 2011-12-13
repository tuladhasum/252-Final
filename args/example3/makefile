OBJECTS=	main.o openfiles.o read.o write.o
CC=g++
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o:		main.cpp
		$(CC) -c main.cpp
openfiles.o:	openfiles.cpp
		$(CC) -c openfiles.cpp
read.o:		read.cpp
		$(CC) -c read.cpp
write.o:	write.cpp
		$(CC) -c write.cpp

clean:
		rm -rf core *.o $(EXE)
