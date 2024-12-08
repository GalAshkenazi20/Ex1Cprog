#compiler type
CC = gcc

#compiler flags
CFLAGS = -Wall -g

ST_LIB_DIR = /home/galash/Downloads/Ex1/A_1/part_3/mathlib.c

DYN_LIB_DIR = /home/galash/Downloads/Ex1/A_1/part_4/advmath.c

STATIC_LIB = st_lib.a

DYN_LIB = dyn_lib.so

SRC_FILE = main.c

OBJ_FILE = main.o

DYNLIB_OBJ = advmath.o

STLIB_OBJ = mathlib.o

TARGET = main

all: $(TARGET) $(STATIC_LIB) $(DYN_LIB)

$(TARGET): $(OBJ_FILE) $(STATIC_LIB) $(DYN_LIB)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ_FILE) $(STATIC_LIB) ./$(DYN_LIB)

$(DYN_LIB): $(DYNLIB_OBJ)
	$(CC) -shared -fPIC -o $(DYN_LIB) $(DYNLIB_OBJ)

$(STATIC_LIB): $(STLIB_OBJ)
	ar rcs $(STATIC_LIB) $(STLIB_OBJ)

$(OBJ_FILE): $(SRC_FILE)
	$(CC) $(CFLAGS) -c $(SRC_FILE) 

$(DYNLIB_OBJ): $(DYN_LIB_DIR)
	$(CC) $(CFLAGS) -c $(DYN_LIB_DIR)

$(STLIB_OBJ): $(ST_LIB_DIR) 
	$(CC) $(CFLAGS) -c $(ST_LIB_DIR)

.PHONY: all clean

clean:
	rm -f $(TARGET) *.o *.so *.a 
