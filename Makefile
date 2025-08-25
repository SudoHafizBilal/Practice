# General Makefile for single C file
CC = gcc
CFLAGS = -Wall -Wextra -O2

# If you run "make", it will compile 'a.c' by default
SRC ?= insertion_sort.c
OUT ?= insertion_sort

all: $(OUT)

$(OUT): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: $(OUT)
	@./$(OUT)

clean:
	@rm -f $(OUT)
