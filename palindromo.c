#include<stdio.h>
#include <string.h>

int ehLetra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char paraMinusculo(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int ehPalindromo(const char *str) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        // aumenta o I ou o J se o caracter não for letra
        while (!ehLetra(str[i]) && i < j) i++;
        while (!ehLetra(str[j]) && i < j) j--;

        if (paraMinusculo(str[i]) != paraMinusculo(str[j])) return 0; 

        i++;
        j--;
    }
    return 1;
}
void main(){
    printf("%d", ehPalindromo("Ovoo"));
}
