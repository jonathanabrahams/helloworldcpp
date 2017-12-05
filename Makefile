#Makefile

PROG = demo
CC = g++
LD = g++
CFLAGS = -g -Wall

BIN = ~/bin
SRC = ./src
INC = ./include
LIB = ./lib
BUILD = ./build

SRC_LST = $(SRC)/main.cpp
OBJ_LST = $(BUILD)/main.o

main.o :
	$(CC) -c $(CLAGS) $(SRC_LST) -o $(OBJ_LST)

$(PROG) : main.o
	$(LD) $(OBJ_LST) -o $(BIN)/$@

clean: 
	rm -f $(BIN)/$(PROG) $(BUILD)/*.o
