all:  test.exe

test.exe:  test.o

      gcc -o test.exe test.o

test.o:  test.c

     gcc -c test.c

clean:

     rm test.o test.exe
