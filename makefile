all: compile link

compile:
  g++ -c test.cpp

clean:
  rm -f main *.o
