#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number; // 입력받은 숫자를 합산

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // 앞의 공백은 이전 입력에서 남은 개행 문자를 처리
    } while (choice == 'y' || choice == 'Y'); // 'y' 또는 'Y'가 입력될 때 계속 반복

    printf("The total sum is: %d\n", sum);

    return 0;
}

