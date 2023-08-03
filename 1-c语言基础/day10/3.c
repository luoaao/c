#include <stdio.h>

int main() {
    int choice;

    printf("菜单:\n");
    printf("1. 宫保鸡丁\n");
    printf("2. 鱼香肉丝\n");
    printf("3. 麻婆豆腐\n");
    printf("4. 清蒸鲈鱼\n");
    printf("5. 红烧排骨\n");
    printf("请选择菜品: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("您选择了宫保鸡丁。\n");
            break;
        case 2:
            printf("您选择了鱼香肉丝。\n");
            break;
        case 3:
            printf("您选择了麻婆豆腐。\n");
            break;
        case 4:
            printf("您选择了清蒸鲈鱼。\n");
            break;
        case 5:
            printf("您选择了红烧排骨。\n");
            break;
        default:
            printf("无效的选择。\n");
            break;
    }

    return 0;
}
