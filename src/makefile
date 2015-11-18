INCL_DIR = .
INCL = -I$(INCL_DIR) 

CXX = g++
FLAGS = -g -Wall -std=c++11 
CXX_COMPILE = $(CXX) $(FLAGS) $(INCL)

%.o:	%.cpp
	$(CXX_COMPILE) -c $*.cpp

all: *.o
	g++ -g -Wall -std=c++11 -o main *.cpp

clean:
	rm *.o main

