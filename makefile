

INCL_DIR = . afficheurs/ datas/ states/
INCL = -I$(INCL_DIR) 

CXX = g++
FLAGS = -g -Wall -std=c++11 
CXX_COMPILE = $(CXX) $(FLAGS) $(INCL)

%.o:	%.cpp
	$(CXX_COMPILE) -c $*.cpp

Robot: Robot.o AfficheursRobot.o datas/Position.o datas/Plot.o datas/Objet.o states/Current_state.o
	$(CXX) $(FLAGS) -o Robot Robot.o AfficheursRobot.o datas/Position.o datas/Plot.o datas/Objet.o states/Current_state.o

clean:
	rm *.o  afficheurs/*.o datas/*.o states/*.o Robot

