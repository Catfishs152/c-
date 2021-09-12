#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int i, flag;
//	char str[80], c;
//	FILE *fp;
//	fp = fopen("text", "w");
//	flag = 1;
//	while (flag == 1)
//	{
//		printf("input string:\n");
//		gets_s(str);
//		fprintf(fp, "%s", str);
//		printf("continue?");
//		c = getchar();
//		if ((c == 'N') || (c == 'n'))
//		{
//			flag = 0;
//		}
//		getchar();
//	}
//	fclose(fp);
//	fp = fopen("text", "r");
//	while (fscanf(fp, "%s", str) != EOF)
//	{
//		for (i = 0; str[i] != '\0'; i++)
//		{
//			if ((str[i] >= 'a') && (str[i] <= 'z'))
//			{
//				str[i] -= 32;
//			}
//		}
//	}
//	printf("%s\n", str);
//	fclose(fp);
//	return 0;
//}

//#include<queue>
//using namespace std;
//
//struct Animal
//{
//	int number;
//	int order;
//	Animal(int n,int o):number(n),order(o){}
//};
//
//queue<Animal>cats;
//queue<Animal>dogs;
//
//int main()
//{
//	int n;
//	printf("输入个数：\n");
//	scanf("%d", &n);
//	int order = 0,str[3];
//	for (int i = 0; i < n; ++i)
//	{
//		int method, type;
//		printf("输入选项、选项\n");
//		scanf("%d%d", &method, &type);
//		if (method == 1)
//		{
//			if (type > 0)
//			{
//				dogs.push(Animal(type, order++));
//			}
//			else
//			{
//				cats.push(Animal(type,order++));
//			}
//		}
//		else
//		{
//			if (type == 0 && !dogs.empty() && !cats.empty())
//			{
//				if (dogs.front().order < cats.front().order)
//				{
//					printf("%d\n", dogs.front().number);
//					dogs.pop();
//				}
//				else 
//				{
//					printf("%d\n", cats.front().number);
//					dogs.pop();
//				}
//			}
//			else if (type == 0 && !dogs.empty() && cats.empty())
//			{
//				printf("%d\n", dogs.front().number);
//				dogs.pop();
//			}
//			else if (type == 0 && dogs.empty() && !cats.empty())
//			{
//				printf("%d\n", cats.front().number);
//				cats.pop();
//			}
//			else if (type == 1 && !dogs.empty())
//			{
//				printf("%d\n", dogs.front().number);
//				dogs.pop();
//			}
//			else if (type == -1 && !cats.empty())
//			{
//				printf("%d\n", cats.front().number);
//				cats.pop();
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}

int main() {
	int i, j, s, b, a[10] = { 1,2,3,5,6 };
	printf("输入：\n");
	scanf("%d", &b);
	s = 5;
	for (i = 0; i < 10; i++)
	{
		if (a[i] < b)
		{
			for (j = s; j > i; j--) 
			{
				a[j] = a[j-1];
			}
			a[j] = b;
		}
		for (i = 0; i <= s; i++)
		{
			printf("%d\n", a[i]);
		}
		return 0;
	}

}

