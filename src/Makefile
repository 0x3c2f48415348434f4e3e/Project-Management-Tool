CC = gcc
CFLAGS = -Wall -pedantic
TARGET = projectmanagementtool
SRC = $(wildcard *.c)
OBJ = $(wildcard *.o)
#src=createProject.c main.c
RM = rm -f

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $? -o $@

%.o: %.c
	$(CC) -c $<

clean:
	$(RM) $(src) $(TARGET)
