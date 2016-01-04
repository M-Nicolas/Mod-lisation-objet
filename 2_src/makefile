INCL_DIR = .
INCL = -I$(INCL_DIR) 

CXX = g++
FLAGS = -g -Wall -std=c++11 
CXX_COMPILE = $(CXX) $(FLAGS) $(INCL)

%.o:	%.cpp
	$(CXX_COMPILE) -c $*.cpp

main.o: Commande.h CommandeRobot.h Invocateur.h MacroCommande.h *.o

# all: *.o
# 	$(CXX_COMPILE) -o main *.o

clean:
	rm *.o main

