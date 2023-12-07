all:  Source.exe

Source.exe:  Source.o

      gcc -o Source.exe Source.o

Source.o:  Source.c

     gcc -c Source.c

clean:

     rm Source.o Source.exe
