#Makefile
CXX=g++
CXXFLAGS = -Wall -Wextra -Werror
BINARIES=prog1A
all: ${BINARIES}



prog1A: Hash_1.o main_1.o
	${CXX} $^ -o  $@ -std=c++11

clean:
	/bin/rm -f ${BINARIES} *.o