#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool is_prime; // 素数かどうかを示すフラグ
    printf("100以下の素数は:\n");

    // 2から100までの整数を調べるループ
    for (num = 2; num <= 100; num++) {
        is_prime = true; 

        // 2からnumの平方根までの整数で割り切れるかチェック
        for (i = 2; i * i <= num; i++) {
            if (num % i = 0) {
                is_prime = false; // 割り切れる場合、素数でない
                break;
            }
        }

        // is_primeがtrueの場合、素数として表示
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}