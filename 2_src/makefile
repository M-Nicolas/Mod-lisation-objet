INCL_DIR = .
INCL = -I$(INCL_DIR) 

CXX = g++
FLAGS = -g -Wall -std=c++11 
CXX_COMPILE = $(CXX) $(FLAGS) $(INCL)

all: tst_main

%.o:	%.cpp
	$(CXX_COMPILE) -c $*.cpp

main.o: Robot.o Invocateur.o Commande.h CommandeRobot.h

Robot.o: Plot.o Position.o Objet.o

tst_main: main.o
	$(CXX) -o tst_main main.o

clean:
	rm *.o tst_main
