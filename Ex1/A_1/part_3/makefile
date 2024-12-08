#Compiler type
CC = gcc

#compiler flags
CFLAGS = -Wall -g

SRC_FILE = main.c

OBJ_FILES = main.o

LIB_FILES = mathlib.c

LIB_OBJ = mathlib.o

LIB_TARGET = lib.a

TARGET = Main

all: $(TARGET) $(LIB_TARGET)

$(TARGET): $(OBJ_FILES) $(LIB_TARGET)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ_FILES) $(LIB_TARGET)

$(LIB_TARGET): $(LIB_OBJ)
	ar rcs $(LIB_TARGET) $(LIB_OBJ)

mathlib.o: mathlib.c
	$(CC) $(CFLAGS) -c mathlib.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

.PHONY: all clean

clean:
	rm -f $(TARGET) *.o $(LIB_TARGET)

