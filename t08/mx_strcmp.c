int mx_strcmp(const char *s1, const char *s2);

int mx_strcmp(const char *s1, const char *s2) {
    int len1 = 0;
    int len2 = 0;
    
    while(*s1++)
        len1++;
    while(*s2++)
        len2++;

    return len1 - len2;
}
