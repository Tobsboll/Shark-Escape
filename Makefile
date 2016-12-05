 CXXFLAGS=-Wall -Wextra -std=c++11 -Wno-unused-parameter
 SFML_FLAGS= -lsfml-graphics -lsfml-window -lsfml-system
 SFML_DIR=SFML-2.4.1/include/SFML
 SRC_DIR=src
 H_DIR=h_files
OBJECTS=Game.o Obstacle.o

# Huvudmål
main:  Game.o Obstacle.o
	g++ $(CXXFLAGS) $(OBJECTS) main.cc -o main $(SFML_FLAGS)   

# Delmål
Game.o: $(H_DIR)/Game.h $(SRC_DIR)/Game.cc $(SFML_DIR)/Graphics.hpp
	g++ $(CXXFLAGS) $(H_DIR)/Game.h $(SRC_DIR)/Game.cc -c $(SFML_FLAGS)


Obstacle.o: $(H_DIR)/Obstacle.h $(SRC_DIR)/Obstacle.cc $(SFML_DIR)/Graphics.hpp
	g++ $(CXXFLAGS) $(H_DIR)/Obstacle.h $(SRC_DIR)/Obstacle.cc -c $(SFML_FLAGS)



