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

bank.o:
	$(CC) -c $(CFLAGS) $(SRC)/Bank/Bank.cpp -o $(BUILD)/bank.o

main.o: bank.o
	$(CC) -c $(CFLAGS) $(SRC)/main.cpp -o $(BUILD)/main.o

$(PROG): main.o bank.o
	$(LD) $(BUILD)/main.o $(BUILD)/bank.o -o $(BIN)/$@

clean: 
	rm -f $(BIN)/$(PROG) $(BUILD)/*.o
