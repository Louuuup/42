CC      =   gcc
SRC     =   ft_bzero.c \
            ft_isalnum.c \
            ft_isalpha.c \
            ft_isascii.c \
            ft_isdigit.c \
            ft_isprint.c \
            ft_memcpy.c \
            ft_memset.c \
			ft_strlen.c
OBJS    =   $(addprefix $(BIN_DIR)/, $(SRC:.c=.o))
NAME    =   libft.a
CFLAGS  =   -Wall -Werror -Wextra
LIBC    =   ar rc
LIBR    =   ranlib
RM      =   rm -f
RM_DIR  =   rm -rf
BIN_DIR =   bin
VPATH   =   .
all : $(NAME)
$(BIN_DIR)/%.o : %.c
    $(CC) $(CFLAGS) -c $< -o $@
$(NAME) : $(BIN_DIR) $(OBJS)
    $(LIBC) $(NAME) $(OBJS)
    $(LIBR) $(NAME)
$(BIN_DIR):
    mkdir -p $(BIN_DIR)
clean:
    $(RM_DIR) $(BIN_DIR)
fclean : clean
    $(RM) $(NAME)
re: fclean all