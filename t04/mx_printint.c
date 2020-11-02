void mx_printchar(char c);

void mx_printint(int n) 
{
    if (n != 0) {
        char str[20];
        int j = 0;
        int i = 0;
        long val = n;
        if (val < 0)
            val = -val;
        while (val != 0) {
            str[i++] = val % 10 + '0';
            val /= 10;
        }
        if (n < 0)
            str[i++] = '-';
        for (j = i - 1; j >= 0; --j) {
            mx_printchar(str[j]);
        }
    } else {
        mx_printchar('0');
    }
}

