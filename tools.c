#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"tools.h"

char* timestamp()
{
    struct tm* tp;
    time_t t;
    char* buffer = (char *) malloc(sizeof(char) * 9);
    time(&t);
    tp = localtime(&t);
    strftime(buffer, 9, "%H:%M:%S", tp);
    return buffer;
}

int getSafeInt(char* prompt) {
    int value;
    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &value) == 1) {
            // Puffer leeren, falls nach der Zahl noch Müll eingegeben wurde (z.B. "12abc")
            while (getchar() != '\n'); 
            return value;
        } else {
            printf("Fehler: Bitte nur Zahlen eingeben!\n");
            while (getchar() != '\n'); // Puffer leeren
        }
    }
}