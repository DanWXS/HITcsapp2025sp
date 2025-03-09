#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_ALL, "");  

    wchar_t wstr;
    wchar_t hexstr[20];
    FILE *text;
    int i = 0, num = 0;

    text = fopen("hello.c", "r");


    while ((wstr = fgetwc(text)) != WEOF) {
        if (i == 16) {
            printf("\n");
            for (int j = 0; j < 16; j++) {
                printf("%04x  ", hexstr[j]);  
            }
            num = 0;
            printf("\n");
            i = 0;
        }
        hexstr[num] = wstr;
        if (wstr == L'\n') {
            printf("  \\n  ");
            i++;
            num++;
            continue;
        }
        printf("%4lc  ", wstr);  
        i++;
        num++;
    }

    printf("\n");
    for (int j = 0; j < num; j++) {
        printf("%04x  ", hexstr[j]);  
    }
    printf("\n");

    fclose(text);
    return 0;
}