gcc -c main.c
gcc -c funktion1.c
gcc -c funktion2.c

ar ruvs funktion.lib funktion1.o funktion2.o
gcc -v -o main.exe main.c funktion.lib