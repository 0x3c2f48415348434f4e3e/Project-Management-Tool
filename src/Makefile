CC := gcc
CFLAGS := -Wall -pedantic
TARGET := projectmanagementtool
SRC := $(wildcard *.c)
OBJ := $(wildcard *.o)
RM = rm -f
OBJFOLDER = OBJ

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
