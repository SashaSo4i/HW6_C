#include <stdio.h>
//вычисляем сначала цифры на каждой из позиций в числе, после перемнодаем их а в ответе умножаем перое получившееся число на 100 чтобы было без разделения между 1 и вторым числом
int ispolnitel(int num) {
    int pos1 = num / 100; 
    int pos2 = (num / 10) % 10; 
    int pos3 = num % 10; 
    int ans1 = pos1 * pos2; 
    int ans2 = pos2 * pos3; 
    int answer = ans1 * 100 + ans2; 
    return answer;
}

int main() {
    int num, answer;
    scanf("%d", &num);
    if (num > 999 && num < 100) { //проверка на диапозон (просто так)
        return 0;
    }
    answer = ispolnitel(num);
    printf("%d", answer);
    return 0;
}