#compiler type
CC = gcc

#Compiler flags

CFLAGS = -Wall -g #-wall(for warnings) ^ -g (for debugger)

SRC_FILES = main.c other.c

OBJ_FILES = main.o other.o

TARGET = Main

all: $(TARGET)

$(TARGET): $(OBJ_FILES)# תקח לי את כול הקבצי או ותכניס לי אותם לקובץ הרצה
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ_FILES) 

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

other.o: other.c
	$(CC) $(CFLAGS) -c other.c

.PHONY: all clean

clean:
	rm -f $(TARGET) *.o



