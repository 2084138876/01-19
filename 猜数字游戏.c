//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//// 菜单
//void menu()
//{
//	printf("输入：1   开始游戏\n");
//	printf("输入：0   退出游戏\n");
//}
//
//
//int select = 0;//选择进入/退出游戏
//int guess = 0;//猜的数字
//
//
//
//// 游戏
//void game()
//{ 
//	srand((unsigned int)time(NULL));
//	int ret = rand() % 100 + 1;// rand() 函数产生0-RAND_MAX 之间的整数，RAND_MAX=0x7fff
//	//rand%100 结果是0-99 之间的整数   ; ret 是 1-100之间的整数 
//
//	while (select)
//	{
//		printf("请猜数字>");
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("恭喜你！猜对了\n");
//			break;
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//
//
//	}
//	
//}
//
//
////   主函数
//int main()
//{
//	menu();
//	printf("请输入数字：>");
//	scanf("%d", &select);
//	// 根据输入的数字  判断是否进入游戏
//	switch (select)
//	{
//	case 1://进入游戏
//		game();
//		break;
//	case 0://退出游戏
//		printf("退出游戏");
//		break;
//	default://输入错误
//		printf("输入错误！\n");
//		break;
//	}
//
//
//	return 0;
//}