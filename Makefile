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
DEPS = main.o Bank.o Account.o
TEST_DEPS = main.o Bank.o BankTest.o AccountTest.o BankAccountsTest.o

GMOCK_DIR = ./external/googletest/googlemock
GMOCK_INC = $(GMOCK_DIR)/include
GTEST_DIR = ./external/googletest/googletest
GTEST_INC = $(GTEST_DIR)/include

all: $(PROG) test.run

gtest-all.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) -I$(GMOCK_INC) -I$(GMOCK_DIR)  $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) -I$(GMOCK_INC) -I$(GMOCK_DIR)  $(GTEST_DIR)/src/gtest_main.cc

gmock-all.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS) -I$(GTEST_DIR) -I$(GTEST_INC) -I$(GMOCK_INC) -I$(GMOCK_DIR) $(GMOCK_DIR)/src/gmock-all.cc

gmock_main.o:
	$(CC) -o $(BUILD)/$@ -c $(CFLAGS)  -I$(GTEST_INC) -I$(GTEST_DIR) -I$(GMOCK_INC) -I$(GMOCK_DIR) $(GMOCK_DIR)/src/gmock_main.cc

%.o: $(TEST)/%.cpp
	$(CC) -c $(CFLAGS) -I$(GTEST_INC) -I$(GTEST_INC) -I$(GMOCK_INC) -I$(SRC) -o $(BUILD)/$@ $<

%.o: $(SRC)/Bank/%.cpp
	$(CC) -c $(CFLAGS) -o $(BUILD)/$@ $<

%.o: $(SRC)/%.cpp
	$(CC) -c $(CFLAGS) -o $(BUILD)/$@ $<

$(PROG): $(DEPS)
	$(LD) $(patsubst %, $(BUILD)/%, $(DEPS)) -o $(BIN)/$@

test.run: Bank.o BankTest.o Account.o AccountTest.o BankAccountsTest.o gtest-all.o gtest_main.o gmock-all.o gmock_main.o
	$(LD) -o $(BIN)/$@ $(BUILD)/gtest-all.o $(BUILD)/gtest_main.o $(BUILD)/Bank.o $(BUILD)/BankTest.o $(BUILD)/Account.o $(BUILD)/AccountTest.o $(BUILD)/BankAccountsTest.o -lpthread

clean: 
	rm -f $(BIN)/$(PROG) $(BIN)/test.run $(BUILD)/*.o
