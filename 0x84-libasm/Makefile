CC=gcc
NB=9
NAME=$(NB)-strncasecmp
SRC1=$(NB)-main.c
OBJ1=$(SRC1:.c=.o)
CFLAGS=-Wall -Wextra -Werror -pedantic -g3
SRC2=$(NAME).asm
OBJ2=$(SRC2:.asm=.o)
OBJS=$(OBJ1) $(OBJ2)
.phony: clean
all: prep $(OBJ1) $(OBJ2) libasm.h
	$(CC) -o $(NAME) $(OBJS)
prep:
	nasm -f elf64 -o $(OBJ2) $(SRC2)
run: all
	./$(NAME)
clean:
	rm $(NAME) $(OBJS)
