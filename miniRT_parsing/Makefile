NAME = test  # Defines the name of the program (executable)

CC = cc  # Defines the C compiler to be used

# Defines the flags for the C compiler. 
# -I./ includes the current directory
# -Wall, -Wextra and -Werror enable all warning messages 
# -g2 enables all debug information
# -fsanitize=address enables AddressSanitizer, a memory error detector.
CFLAGS = -I./

# Specifies all source files to be compiled
SRCS = main.c\
		parse.c\
		parse_elements.c\
		utils.c

OBJS = ${SRCS:.c=.o}  # Specifies object files generated from source files

LIB	=	-L ./libft -lft  # Specifies the library to be linked

all: lib_mlx $(NAME)  # Default target. Builds lib_mlx and the program.

lib_mlx:
		make -C ./libft  # Builds the libft library
		make -C ./libft bonus  # Builds the bonus part of libft library
		make -C ./mlx  # Builds the mlx library

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@  # Rule for building object files from source files

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(LIB) $(OBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean :
	rm -rf $(OBJS)
	make clean -C ./libft
	make clean -C ./mlx

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re

