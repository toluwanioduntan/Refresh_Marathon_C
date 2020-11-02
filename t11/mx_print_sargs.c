void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
    char *temp;
    if(argc < 2) {
        return 0;
    }
    for(int i = 1; i < argc; ++i) {
        for(int j = 1;j < argc; j++) {
            if(mx_strcmp(argv[i], argv[j]) > 0) {
                temp = argv[j];
                argv[j] = argv[i];
                argv[i] = temp;
            }
        }
    }
    for(int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}
