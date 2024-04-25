OBJ = my_ngram.o
TARGET = my_ngram
CC = gcc

$(TARGET) : $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

my_ngram.o : my_ngram.c
	gcc -c my_ngram.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all