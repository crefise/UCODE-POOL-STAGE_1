.PHONY: clean all

SOURCE := src

all: RACE01
	
RACE01:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(SOURCE)/*.c -o mx_cp

uninstall: clean

reinstall: clean all

clean:
	rm -f  mx_cp
