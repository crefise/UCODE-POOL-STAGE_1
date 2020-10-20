.PHONY: clean all

SOURCE := src

all: RACE02
	
RACE02:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(SOURCE)/*.c -o way_home

uninstall: clean

reinstall: clean all

clean:
	rm -f way_home
	