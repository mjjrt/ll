SRC=*.c
OBJ=*.o
OUT= ll

CC =gcc
CFLAGS = -Wall -Werror

all: clean $(OBJ) $(OUT)

$(OUT): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(OUT)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ) $(OUT)

docs:
	doxygen $(SRC)