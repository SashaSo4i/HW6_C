#include <stdio.h>
//вычисляем сначала цифры на каждой из позиций в числе
int ispolnitel(int num) {
    int pos1, pos2, pos3, ans2, ans1;
    pos1 = num / 100; 
    pos2 = (num / 10) % 10; 
    pos3 = num % 10;
    ans1 = pos1 * pos2; 
    ans2 = pos2 * pos3;
    if (ans1 <= ans2) {
        printf("%d%d", ans2, ans1);
    }
    else {
        printf("%d%d", ans1, ans2);
    }
    return 0;
}

int main() {
    int num, ans;
    scanf("%d", &num);
    if (num > 999 && num < 100) { //проверка на диапозон (просто так)
        return 0;
    }
    ispolnitel(num);
    return 0;
}
