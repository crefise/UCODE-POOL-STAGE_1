#include <unistd.h>
#include <stdio.h>

void mx_printchar(char c);

void mx_pyramid(int n) {
    if (n >= 2 && n % 2 == 0){
		int back = n / 2;
		int basic_indent = n - 1;
		int indent = basic_indent;
		int number = -1;
		int p = 1;
		while (indent > 0) {
			for (int i = 0; i < indent; i++) {
				mx_printchar(' ');
			}
			mx_printchar('/');
			if (number == -1) {
				mx_printchar('\\');
			}
			else {
				for (int i = 0; i < 1 + number * 2; i++) {
					mx_printchar(' ');
				}
				mx_printchar('\\');
				if (number <= back - 2) {
					for (int i = 0; i < 1 + number; i++) {
						mx_printchar(' ');
					}
					mx_printchar('\\');
				}
				else {
					for (int i = 0; i < 1 + number - p; i++) {
						mx_printchar(' ');
					}
					mx_printchar('|');
					p += 2;
				}
			}
			mx_printchar('\n');
			number++;
			indent--;
		}
		mx_printchar('/');
		for (int i = 0; i < 1 + number * 2; i++) {
			mx_printchar('_');
		}
		mx_printchar('\\');
		mx_printchar('|');
		mx_printchar('\n');
	}
}
