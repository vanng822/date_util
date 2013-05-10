
CC=gcc
BUILD_DIR=build
SRC=src
INCLUDE=/opt/local/include/
LIB=/opt/local/lib/
BUILD_TEST_FLAGS=ncurses
UNAME := $(shell uname)
ifeq ($(UNAME), Linux)
INCLUDE=/usr/local/include
LIB=/usr/lib
endif

init:
	@$(shell mkdir build)

clean:
	@rm $(BUILD_DIR)/*.o


test:
	make build-tests
	make run-tests

build-tests:
	$(CC) -I$(SRC)  -l${BUILD_TEST_FLAGS} -I$(INCLUDE) -L$(LIB) tests/c/all_tests.c -lcunit -o $(BUILD_DIR)/all_tests.o
	
run-tests:
	./$(BUILD_DIR)/all_tests.o