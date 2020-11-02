#include <stdio.h>

void mx_printchar(char c);

void mx_printstr(const char *);

int main(int argc, char *argv[]) {
    if (argc == 1)
    	return 0;
    int i;
    for (i = 1; i < argc; i++) {
    	mx_printstr(argv[i]);
    	mx_printchar('\n');
    }
    return 0;
}
