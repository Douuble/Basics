/*globalCalling.c*/
#include<stdio.h>
#include<string.h>

extern int counter(char* a);

int main() {
	char array[30];
	int flag = 1;
	int result;
	while (flag) {
		printf("�������������ִ�Сд���ַ���(����15���ַ�)��\n");
		scanf("%s", &array);
		if (strlen(array) > 15) {
			flag = 0;
		}
		else printf("�����ַ����㣡���������룡\n");
	}
	result=counter(array);
		printf("%s lowercase is included.", result);
		return 0;

	
}

///*globalCalled.S*/
//.global counter
//
//#Start the function:counter
//counter:

CMP r1,#0
beq cret 
CMP r1,'a'
ja greatera
jb counter

cret:
RET

greatera:
cmp r1,'z'
jb count

count:
  inc num