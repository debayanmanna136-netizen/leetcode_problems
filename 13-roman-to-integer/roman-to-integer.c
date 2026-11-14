int value(char c) {
    if (c == 'I') return 1;
    else if (c == 'V') return 5;
    else if (c == 'X') return 10;
    else if (c == 'L') return 50;
    else if (c == 'C') return 100;
    else if (c == 'D') return 500;
    else return 1000;
}

int romanToInt(char* s) {
    int num = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int current = value(s[i]);

        if (i < len - 1 && current < value(s[i + 1])) {
            num -= current;
        }
        else {
            num += current;
        }
    }

    return num;
}