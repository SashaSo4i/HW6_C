#include <stdio.h>
//это пипец. Я думал что я деградирующее создание которое не понимает ПОЧЕМУ ЧИСЛА ФИБОНАЧИ НЕ РАБОТАЕТ.
int main() { //и казалось бы задачка не сложное, НО у меня почему-то оказалась что выводит она (программа) предыдущее число а не текущщее вводимое.
    int n, Fi_1 = 0, Fi_2 = 1, Fi_n;
    scanf("%d", &n);
    n++; //топовый багфикс с +1 решает все проблемы и программа работает коректно.
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            Fi_n = i;
        } 
        else {
            Fi_n = Fi_1 + Fi_2;
            Fi_1 = Fi_2;
            Fi_2 = Fi_n;
        }
    }
    printf("%d", Fi_n);
    return 0;
}