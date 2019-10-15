#Makefile

CXX=clang++

CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field


minions: minions.o acm.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f *.o minions socks