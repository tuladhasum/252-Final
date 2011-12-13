CC = g++
EXE = prog
OBJECTS = main.o read.o write.o
CFLAGS = -Wall
LFLAGS =

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

write.o:	write.cpp
		$(CC) $(CFLAGS) -c write.cpp

read.o:		read.cpp constants.h
		$(CC) $(CFLAGS) -c read.cpp

main.o:		main.cpp constants.h
		$(CC) $(CFLAGS) -c main.cpp

clean:
		rm -rf core.* $(EXE) $(OBJECTS) results
