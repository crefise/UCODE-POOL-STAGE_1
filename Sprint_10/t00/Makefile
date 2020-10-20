.PHONY: clean all

SOURCE := src

all: RACE01
	
RACE01:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(SOURCE)/*.c -o read_file

uninstall: clean

reinstall: clean all

clean:
	rm -f  read_file
