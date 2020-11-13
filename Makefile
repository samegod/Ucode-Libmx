NAME = libmx.a

SRC = src/*.c

OBJ = obj/*.o

FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install

install:
	@clang $(FLAGS) -c $(SRC)
	@mkdir -p obj
	@cp *.o obj/.
	@ar -rc $(NAME) obj/*.o
	@rm -rf *.o

uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf obj

reinstall: all
