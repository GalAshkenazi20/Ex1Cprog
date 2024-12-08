#Compiler type
CC = gcc

#Compiler Flags

CFLAGS = -Wall -g -I/home/galash/Downloads/Ex1/A_1/part_2/Include

SRC_DIR = /home/galash/Downloads/Ex1/A_1/part_2/src

SRC_FILE = armor.c character.c main.c shiny.c
OBJ_FILES = armor.o character.o main.o shiny.o

TARGET = Main

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ_FILES)

armor.o: src/armor.c
	$(CC) $(CFLAGS) -c src/armor.c

character.o: src/character.c
	$(CC) $(CFLAGS) -c src/character.c

main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c

shiny.o: src/shiny.c
	$(CC) $(CFLAGS) -c src/shiny.c

.PHONY: all clean

clean:
	rm -f $(TARGET) *.o


