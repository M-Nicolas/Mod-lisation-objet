

INCL_DIR = . afficheurs/. datas/. states/.
INCL = -I$(INCL_DIR) 

CXX = g++
FLAGS = -g -Wall -std=c++11 
CXX_COMPILE = $(CXX) $(FLAGS) $(INCL)

%.o :	%.cpp
	$(CXX_COMPILE) -c $*.cpp

Robot : Robot.o
	$(CXX) $(FLAGS) -o Robot Robot.o
