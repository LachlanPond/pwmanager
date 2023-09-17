# Variables
CXX = g++
STD = -std=c++20

SRC = src/main.cpp src/pwmanager.cpp
DEP = src/pwmanager.h
OBJ = main.o pwmanager.o
EXE = pwmanager
PKG = `pkg-config --cflags --libs gtkmm-4.0`

# Rules
all: $(EXE)

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $(OBJ) $(PKG) $(STD)

$(OBJ): $(SRC) $(DEP)
	$(CXX) -c $(SRC) $(PKG) $(STD)

# Phony targets
.PHONY: clean
clean:
	rm -rf $(OBJ) $(EXE)