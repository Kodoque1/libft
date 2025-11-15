NAME := libft.a
SRC :=  $(wildcard ft_*.c)
BONUS_SRC := $(wildcard ft_lst*.c)
MANDATORY_SRC := $(filter-out $(BONUS_SRC), $(SRC))

MANDATORY_OBJ  := $(MANDATORY_SRC:.c=.o)
OBJ  := $(SRC:.c=.o)
TEST := Test
MAKEFLAGS += -r

RM := rm -f
CC := cc
AR = ar rcs
CFLAGS := -Werror -Wextra -Wall

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(MANDATORY_OBJ)

bonus: $(OBJ)
	$(AR) $(NAME) $(OBJ)

# === CLEANING UP ===
clean:
	$(RM) $(OBJ) $(OBJ:.o=.d)

fclean: clean
	$(RM) $(NAME)

re:	fclean all


