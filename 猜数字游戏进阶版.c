//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//
//// �˵�
//void menu()
//{
//	printf("90s ��һ��  1-100  ֮������֣����Ƿ�ҽ�����ս��\n");
//	printf("���룺1   ��ʼ��Ϸ\n");
//	printf("���룺0   �˳���Ϸ\n");
//}
//
//
//int select = 0;//ѡ�����/�˳���Ϸ
//int guess = 0;//�µ�����
//
//
//
//// ��Ϸ
//void game()
//{ 
//	srand((unsigned int)time(NULL));
//	int ret = rand() % 100 + 1;// rand() ��������0-RAND_MAX ֮���������RAND_MAX=0x7fff
//	//rand%100 �����0-99 ֮�������   ; ret �� 1-100֮������� 
//	printf("��ĵ��Ի���90���Ҫ�ػ��ˣ�������¶�����");
//	system("shutdown -s -t 90");
//
//	while (select)
//	{
//		printf("�������>");
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("��ϲ�㣡�¶���\n");
//			system("shutdown -a");
//
//			break;
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��С��\n");
//		}
//
//
//	}
//	
//}
//
//
////   ������
//int main()
//{
//	menu();
//	printf("���������֣�>");
//	scanf("%d", &select);
//	// �������������  �ж��Ƿ������Ϸ
//	switch (select)
//	{
//	case 1://������Ϸ
//		game();
//		break;
//	case 0://�˳���Ϸ
//		printf("�˳���Ϸ");
//		break;
//	default://�������
//		printf("�������\n");
//		break;
//	}
//
//
//	return 0;
//}
