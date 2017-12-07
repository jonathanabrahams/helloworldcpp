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
TEST = ./test

GTEST_DIR = ./external/googletest/googletest
GTEST_INC = $(GTEST_DIR)/include

all: $(PROG) test.run

gtest-all.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) $(GTEST_DIR)/src/gtest_main.cc

BankTest.o:
	$(CC) -c $(CFLAGS) -I$(GTEST_INC) -I$(SRC) -o $(BUILD)/$@ $(TEST)/BankTest.cpp

Bank.o:
	$(CC) -c $(CFLAGS) -o $(BUILD)/$@ $(SRC)/Bank/Bank.cpp

BankPrinter.o:
	$(CC) -c $(CFLAGS) -o $(BUILD)/$@ $(SRC)/Bank/BankPrinter.cpp

main.o: Bank.o BankPrinter.o
	$(CC) -c $(CFLAGS) -o $(BUILD)/$@ $(SRC)/main.cpp

$(PROG): main.o Bank.o BankPrinter.o
	$(LD) $(BUILD)/main.o $(BUILD)/Bank.o $(BUILD)/BankPrinter.o -o $(BIN)/$@

test.run: Bank.o BankTest.o gtest-all.o gtest_main.o
	$(LD) -o $(BIN)/$@ $(BUILD)/gtest-all.o $(BUILD)/gtest_main.o $(BUILD)/Bank.o $(BUILD)/BankTest.o -lpthread

clean: 
	rm -f $(BIN)/$(PROG) $(BIN)/test.run $(BUILD)/*.o
