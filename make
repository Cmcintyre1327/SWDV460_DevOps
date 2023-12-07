 output: Source.o
        g++ -std=c++0x -Wall Source.o -o output

 Source.o: Source.cpp
        g++ -c Source.cpp

 clean:
        rm *.o output
