CC = gcc
CFLAGS = -Wall -pedantic
TARGET = projectmanagementtool
SRC = $(wildcard *.c)
OBJ = $(wildcard *.o)
#src=createProject.c main.c
RM = rm -f

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $? -o $@

createProject.o : createProject.c
	$(CC) $(CFLAGS) -c $<

customErrorManagement.o : customErrorManagement.c

help.o : help.c

log.o : log.c

main.o : main.c


clean:
	$(RM) $(src) $(TARGET)
