#include <stdio.h>

// 2023�� 2ȸ 1��
// �迭, for��
// ��ȣ ä���

int main() {
    int n[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("���ڸ� �Է����ּ���:");
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 5; i++)
//      printf("%d", (            ));
        printf("%d", n[(i + 1) % 5]);

    return 0;
}

// [����]ddd
// �Է°��� 54321�� ���
// ��°��� 43215�� ��µǾ�� �Ѵ�.