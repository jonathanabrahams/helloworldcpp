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

gtest-all.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) $(GTEST_DIR)/src/gtest_main.cc

bank_test.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_INC) -I$(SRC) $(TEST)/BankTest.cpp

bank.o:
	$(CC) -c $(CFLAGS) $(SRC)/Bank/Bank.cpp -o $(BUILD)/bank.o

main.o: bank.o
	$(CC) -c $(CFLAGS) $(SRC)/main.cpp -o $(BUILD)/main.o

$(PROG): main.o bank.o
	$(LD) $(BUILD)/main.o $(BUILD)/bank.o -o $(BIN)/$@

test.run: bank.o bank_test.o gtest-all.o gtest_main.o
	$(LD) -o $(BIN)/$@ $(BUILD)/gtest-all.o $(BUILD)/gtest_main.o $(BUILD)/bank.o $(BUILD)/bank_test.o -lpthread

clean: 
	rm -f $(BIN)/$(PROG) $(BIN)/test.run $(BUILD)/*.o