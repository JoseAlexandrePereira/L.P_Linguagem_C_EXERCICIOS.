#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int qtdVogais = 0;

    printf("Digite uma string de até 100 caracteres: ");
    fgets(str, sizeof(str), stdin);  // Use fgets instead of gets

    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            qtdVogais++;
        }
    }

    printf("A string contém %d vogais.\n", qtdVogais);
    return 0;
}