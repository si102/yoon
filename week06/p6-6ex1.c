#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number; // �Է¹��� ���ڸ� �ջ�

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // ���� ������ ���� �Է¿��� ���� ���� ���ڸ� ó��
    } while (choice == 'y' || choice == 'Y'); // 'y' �Ǵ� 'Y'�� �Էµ� �� ��� �ݺ�

    printf("The total sum is: %d\n", sum);

    return 0;
}

