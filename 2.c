#include <stdio.h>
#include <stdlib.h> //нужна для работы с памятью (malloc && free) то есть динам выделение памяти.
//можно упоминуть способ через библиотеку string.h а именно strcat который для этого и существует (объединение строк).
char *join(char *words[], int n) { // функция join для  обьединение строк массива пока i element не выйдет за массив.
    char* result = malloc(255); //
    int adress = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; words[i][j] != '\0'; j++) {
            result[adress++] = words[i][j];
        }
        if (i != n-1) {
            result[adress++] = ' ';
        }
    } 
    result[adress] = '\0';
    return result;
}

int main() { //функция мейн с самим динамическим массивом, его созданием и дальнейшим освобождением памяти.
    char *words[255];
    int len;
    scanf("%d", &len);
    for (int i = 0; i < len; i++) {
        words[i] = malloc(255);
        scanf("%s", words[i]);
    }
    char *result = join(words, len);
    printf("%s", result);
    free(result);
    for (int i = 0; i < len; i++) {
        free(words[i]);
    }
    return 0;
}
