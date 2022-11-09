#include <stdio.h>

/**
 *  �Լ�(method)
 *    - ()�پ������� �Լ�
 *    - printf(), scanf(), sizeof() �Լ�!
 *    - Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ�
 *    - ����� �����ϴ� �ڵ� ����
 *    - �ݺ����� �۾��� ���ϱ� ���� ���
 *    - �ݺ����� �۾� �� �Լ� ���� �� �ʿ��� ������ ȣ���ؼ� ���
 *    - ���� �� ����(), ����(), ����(), ������(), :���
 * 
 *  C��� �Լ� ��� ���
 *  1. �Լ� ����: �Լ��� �ڵ�� ����
 *  2. �Լ� ȣ��: ���� �� �Լ��� ����ϱ� ���� ȣ��(�Լ������� ȣ��)
 *  3. �Լ� ����: �����Ϸ����� �Լ� ������ ����
 *  ����: ���� �� ���� �� ȣ��
 * 
 *  �Լ��� ����
 *  1. �����Լ�(built-in): C��� ��ġ ���� �Լ� ex) main scanf pritnf
 *  2. �����Լ�(library) : �ٸ� �����ڰ� ����� ���� �Լ�
 *  3. ����� ���� �Լ�   : ���� ����                                                �� ���̾�
 * 
 *  ��Ģ 
 *  1.�Լ���: ���� ���� ��Ģ�� ���� �ۼ�
 *  2.��ȯ��(return): �Լ��� ����� ������ �Ŀ� ȣ���� ������
 *                    ������ ���� �ڷ��� 
 *  3.�Ű�����(parameters): �Լ��� ó���� �����͸� �����ϴ� ����
 *                         (,)�� ������� ������ ���� ����
 *    int ��ȯ��   (void)�Ű�����
*/

//3)�Լ� ����: �����Ϸ����� �˷��ִ�
int sum(int x, int y);

int main (void) { // main�Լ�(method)
    int a = 5, b= 10;
    int result;
    
    // 2)�Լ� ȣ��: �Լ��� ����ϱ� ���� ȣ��
    result = sum(a, b);        // a + b;
    printf("result: %d",result);
}   //�Լ� �ȿ� �Լ� ������


// 1) �Լ� ����: �Լ� �ڵ� ����          //sum �Լ����� sun�Լ� ȣ�� //int(��) return(��) ���̾� 
int sum(int x, int y) {                  //�Է°��� ������ ȣ���Ϸ� �� , �ٽõ��ư��� ������: return 
    int temp;                           //temp �� �ڷ��� ��Ÿ���� �� sum���� int
    temp = x + y;
    return temp; //�Լ� ���� �� ��ȯ ��  (���ư��� ������ ���� ��)
}
