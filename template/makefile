CC = g++
OBJECTS = main.o 
LFLAGS = 
CFLAGS =  
EXE = prog


$(EXE):		$(OBJECTS) 
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS) 

main.o:		main.cpp 
		$(CC) $(CFLAGS) -c main.cpp 

clean:
		rm -rf $(EXE) $(OBJECTS) core.* 

