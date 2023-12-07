all:  source.exe

hello.exe:  source.h

      gcc -o source.exe source.h

source.h:  source.cpp

     gcc -c source.cpp

clean:

     rm source.h source.exe
