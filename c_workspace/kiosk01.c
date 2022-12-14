#include <stdio.h>
#include <string.h>

// �޴�ǥ ����(����)
char *burger_name[3] = {"���", "��������", "���̹���"};
char *side_name[3] = {"�Ƴʰ�", "ġ�ƽ", "��¡�"};
char *drink_name[3] = {"��ī�ݶ�", "�����ݶ�", "��������Ʈ"};

// ����ǥ ����(����)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// ���� �ֹ� ��� ����(����)
char *menu_save[3] = {};  // �ֹ� �޴�
int price_save[3] = {};   // �ֹ� ����

void print_main_menu(void);
void print_order(void);
int choice_burger(void);
int choice_side(void);
int choice_drink(void); 

int main() {
    while(1) {
        // 1.���� �޴� ���
        print_main_menu();
        
        // 2.����� ���� �޴� ����
        int menu_num = 0;  // ����ڰ� ������ �޴���ȣ ����
        puts("�� ���Ͻô� �޴���ȣ�� �����ϼ���.");
        while(1) {  // 1:True, 0:False
            printf(">> ��ȣ: ");
            scanf("%d", &menu_num);
            if(menu_num >= 1 && menu_num <= 4) {  // 1~4 out
                break;
            } else {
                puts("Warning: 1~4�� ��ȣ�� �Է����ּ���.");
            }
        }

        // 3.���θ޴� ��� (1~4 in)
        int order_num;  // ����ڰ� ������ ����޴� ��ȣ
        if(menu_num == 1) {          // �ܹ��� ��Ʈ
            order_num = choice_burger();
            menu_save[0] = burger_name[order_num-1];  
            price_save[0] = burger_price[order_num-1];
            order_num = choice_side();
            menu_save[1] = side_name[order_num-1];  // ���� �̸�
            price_save[1] = side_price[order_num-1];
            order_num = choice_drink();
            menu_save[2] = drink_name[order_num-1];  // ���� �̸�
            price_save[2] = drink_price[order_num-1];
            print_order();

        } else if(menu_num == 2) {   // �ܹ���
            order_num = choice_burger();
            menu_save[0] = burger_name[order_num-1];  // ���� �̸�
            price_save[0] = burger_price[order_num-1];  // ���� ����
            print_order();
        } else if(menu_num == 3) {   // ���̵�
            order_num = choice_side();
            menu_save[0] = side_name[order_num-1];
            price_save[0] = side_price[order_num-1];
            print_order();
        } else if(menu_num == 4) {   // �帵ũ
            order_num = choice_drink();
            menu_save[0] = drink_name[order_num-1];
            price_save[0] = drink_price[order_num-1];
            print_order();
        }

        // �߰� �ֹ� ����
        puts("��������������������������������������");
        puts("�� �߰� �ֹ��Ͻðڽ��ϱ�? (yes=1/no=0)");
        printf(">> �Է�: ");
        int order_yn;
        scanf("%d", &order_yn);
        if(order_yn == 1) {
            continue; 
        } else {
            break; 
        }
    }
    // + ���� �ֹ����(3ĭ) �� �÷���(100ĭ)
    // + �ֹ��Ҷ����� �� ��° count  
    // �������� ���
    // 1.�ֹ��ߴ� ��� �� �޴�, �Ѱ��� ���
}

// ���� �޴��� ����ϴ� �Լ�
void print_main_menu(void) {
    puts("��������������������������������������");
    puts("�� == CNU ���� 2022 ==");
    puts("��  - Version 1.0");   
    puts("��  - Develop by cholong02");   
    puts("��  - Date 2022.12.07");   
    puts("��������������������������������������");
    puts("�� ���� ������ ã���ּż� �����մϴ�.");
    puts("�� ���Ͻô� �޴��� �������ּ���.");
    puts("��������������������������������������");
    puts("�� 1.�ܹ��� ��Ʈ");  // �ܹ���, ���̵�, ����
    puts("�� 2.�ܹ��� �޴�");  // �ܹ���
    puts("�� 3.���̵� �޴�");  // ���̵�
    puts("�� 4.�帵ũ �޴�");  // ����
    puts("��������������������������������������");
}


// 1.�ܹ��� �ֹ�
int choice_burger(void) {
    puts("��������������������������������������");
    puts("== Burger Menu ==");
    for(int i=0; i<3; i++) {
        printf("��� %d.%s(%d��) \n", i+1, burger_name[i], burger_price[i]);
    }
    puts("��������������������������������������");
    int choice_num;
    while(1) {
        printf(">> ��ȣ: ");
        scanf("%d", &choice_num); 
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warning: 1~3�� ��ȣ�� �Է����ּ���.");
        }
    }
    return choice_num;
}
// 2.���̵� �ֹ�
int choice_side(void) {
    puts("��������������������������������������");
    puts("== Side Menu ==");
    for(int i=0; i<3; i++) {
        printf("��� %d.%s(%d��) \n", i+1, side_name[i], side_price[i]);
    }
    puts("��������������������������������������");
    int choice_num;
    while(1) {
        printf(">> ��ȣ: ");
        scanf("%d", &choice_num); 
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warning: 1~3�� ��ȣ�� �Է����ּ���.");
        }
    }
    return choice_num;
}
// 3.�帵ũ �ֹ�
int choice_drink(void) {
    puts("��������������������������������������");
    puts("== Drink Menu ==");
    for(int i=0; i<3; i++) {
        printf("��� %d.%s(%d��) \n", i+1, drink_name[i], drink_price[i]);
    }
    puts("��������������������������������������");
    int choice_num;
    while(1) {
        printf(">> ��ȣ: ");
        scanf("%d", &choice_num); 
        if(choice_num >= 1 && choice_num <= 3) {
            break;
        } else {
            puts("Warning: 1~3�� ��ȣ�� �Է����ּ���.");
        }
    }
    return choice_num;
}


// �ֹ��� �޴��� ������ ���
void print_order(void) {
    int menu_len = sizeof(menu_save) / sizeof(menu_save[0]);
    int price_len = sizeof(price_save) / sizeof(price_save[0]);
    for(int i=0; i<menu_len; i++) {
        printf("�ֹ�[%d]: %s\n", i, menu_save[i]);
    }
    for(int i=0; i<price_len; i++) {
        printf("����[%d]: %d\n", i, price_save[i]);
    }
}