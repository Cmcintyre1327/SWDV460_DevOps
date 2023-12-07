all: compile link

compile:
  g++ -c test.cpp

link:
  g++ -o test test.o

clean:
  rm -f main *.o
