CC = gcc
FLAGS = -Wall -Wextra -Werror
OBJ = main.o my_mastermind.o
HEADERS = my_mastermind.h
TARGET = my_mastermind
SRC = main.c my_mastermind.c 

.PHONY: all fclean clean re

all: $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(TARGET)

$(OBJ) : $(SRC)
	$(CC) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean  all