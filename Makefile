NAME := libft.a
SRC :=  $(wildcard ft_*.c)
OBJ  := $(SRC:.c=.o)
TEST := Test
MAKEFLAGS += -r

RM := rm -f
CC := cc
AR = ar rcs
CFLAGS := -Werror -Wextra -Wall

%.o : %.c
	$(CC) -g3 -c $(CFLAGS) $(CPPFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# === CLEANING UP ===
clean:
	$(RM) $(OBJ) $(OBJ:.o=.d)

fclean: clean
	$(RM) $(NAME)

re:	fclean all


