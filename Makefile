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
DEPS = main.o Bank.o Printer.o Account.o
TEST_DEPS = main.o Bank.o BankTest.o AccountTest.o

GTEST_DIR = ./external/googletest/googletest
GTEST_INC = $(GTEST_DIR)/include

all: $(PROG) test.run

gtest-all.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) $(GTEST_DIR)/src/gtest_main.cc

%.o: $(TEST)/%.cpp
	$(CC) -c $(CFLAGS) -I$(GTEST_INC) -I$(SRC) -o $(BUILD)/$@ $<

%.o: $(SRC)/Bank/%.cpp
	$(CC) -c $(CFLAGS) -o $(BUILD)/$@ $<

%.o: $(SRC)/%.cpp
	$(CC) -c $(CFLAGS) -o $(BUILD)/$@ $<

$(PROG): $(DEPS)
	$(LD) $(patsubst %, $(BUILD)/%, $(DEPS)) -o $(BIN)/$@

test.run: Bank.o BankTest.o Account.o AccountTest.o gtest-all.o gtest_main.o
	$(LD) -o $(BIN)/$@ $(BUILD)/gtest-all.o $(BUILD)/gtest_main.o $(BUILD)/Bank.o $(BUILD)/BankTest.o $(BUILD)/Account.o $(BUILD)/AccountTest.o -lpthread

clean: 
	rm -f $(BIN)/$(PROG) $(BIN)/test.run $(BUILD)/*.o
