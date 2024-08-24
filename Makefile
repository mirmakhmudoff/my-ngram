TARGET = my_ngram
CFLAGS = -Wall -Wextra -Werror
SRC = my_ngram.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
  gcc $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
  gcc $(CFLAGS) -c $(SRC)

clean:
  rm -f *.o

fclean: clean
  rm -f $(TARGET)

re: fclean all
