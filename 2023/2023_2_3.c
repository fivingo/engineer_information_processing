#include <stdio.h>

// 2023�� 2ȸ 3��
// ���� ����
// ���� ���

char n[30];

char *test() {
    printf("�Է��ϼ���:");
    gets(n);    // �� �� �Է� �޴� �Լ�

    return n;
}

int main() {
    char *test1;
    char *test2;
    char *test3;

    test1 = test();
    test2 = test();
    test3 = test();

    printf("%s\n", test1);
    printf("%s\n", test2);
    printf("%s", test3);
}

// [����]
// �Է°��� ȫ�浿, ��ö��, �ڿ��� ������ �־�����.