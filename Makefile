SRC_DIR := src
OBJ_DIR	:= obj

INC_DIR := include

CC 		:= gcc
CFLAGS 	:= -g -Wall -Werror -I$(INC_DIR)

RM := rm

EXE := ll

SRC := $(wildcard $(SRC_DIR)/*.c)
OBJ := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -rv $(OBJ_DIR)  $(EXE)

-include $(OBJ:.o=.d)