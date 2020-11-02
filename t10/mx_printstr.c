#include <unistd.h>

void mx_printstr(const char *);

int mx_strlen(const char *);

void mx_printstr(const char *s) {
     int len = mx_strlen(s);
     write(1, s, len);
}
