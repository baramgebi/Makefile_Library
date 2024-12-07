OBJECTS			= main.o funktion.o

all: main.exe

main.exe: $(OBJECTS)
	gcc -o main.exe main.o funktion.o

%.o: %.c
	gcc -c -g -o $@ $<	

clean:
	rm *.o *.exe