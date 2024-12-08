#compiler type
CC = gcc

#compiler flags
CFLAGS = -Wall -g

SRC_FILE = main.c

OBJ_FILES = main.o

LIB_FILES = advmath.c

LIB_OBJ = advmath.o

LIB_TARGET = lib.so

TARGET = Main

all: $(TARGET) $(LIB_TARGET)

$(TARGET): $(OBJ_FILES) $(LIB_TARGET)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ_FILES) ./$(LIB_TARGET) 

$(LIB_TARGET): $(LIB_OBJ)
	$(CC) -shared -fPIC -o $(LIB_TARGET) $(LIB_OBJ)

advmath.o: advmath.c
	$(CC) $(CFLAGS) -c advmath.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

.PHONY: all clean

clean:
	rm -f $(TARGET) *.o $(LIB_TARGET)
