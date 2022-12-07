#include<stdio.h>
//void swap(int *sum,int *mul,int* p1, int* p2)
//{
//	int temp = 0;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//	*sum = *p1 + *p2;
//	*mul = *p1 * *p2;
//}
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int sum = 0;
//	int mul = 0;
//	printf("交换前i=%d,j=%d\n", i, j);
//	int* p1 = &i;
//	int* p2 = &j;
//	swap(&sum,&mul,p1,p2);
//	printf("交换后i=%d,j=%d\n", i, j);
//	printf("和=%d,积=%d", sum, mul);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = &arr;
//	int a = 0;
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	printf("请输入：\n");
//	scanf_s("%d", &a);
//	for (i = 0; ; i++)
//	{
//		for (j = 0; j < 9; j++)
//		{
//			if (a > *p)
//				p++;
//			else if (a < *p)
//			{
//				for (j = 0;; j++)
//				{
//					temp = arr[j];
//					arr[j] = a;
//					arr[j + 1] = temp;
//				}
//				
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void swap(int *x[2])
//{
//	int t = 0;
//	t = x[0];
//	x[0] = x[1];
//	x[1] = t;
//}
//int main()
//{
//	int a[2] = { 4,7 };
//	swap(a);
//	printf("%d,%d", a[1], a[2]);
//	return 0;
//}



//#include <stdio.h>
//void AAA(int* a, int m) 
//{
//    int first, temp1, temp2;
//    int i, j;
//    first = a[0];
//    if (m <= first) 
//    {
//        a[0] = m;
//    }
//    else 
//    {
//        for (i = 0; i < 10; i++)
//        {
//            if (a[i] > m)
//            {
//                temp1 = a[i];
//                a[i] = m;
//                for (j = i + 1; j < 11; j++)
//                {
//                    temp2 = a[j];
//                    a[j] = temp1;
//                    temp1 = temp2;
//                }
//                break;
//            }
//        }
//    }
//}
//void bubble_sort(int* a)
//{
//    int i = 0;
//    int j = 0;
//    int temp = 0;
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 11-i-1; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
//}
//int main() 
//{
//    int a[11] = { 0 };
//    int m, i;
//    printf("请输入任意10个数字:\n");
//    for (i = 1; i < 11; i++)
//    {
//        scanf_s("%d", &a[i]);
//    }
//    bubble_sort(a);
//    printf("请输入要插入的数:");
//    scanf_s("%d", &m);
//    AAA(a, m);
//    printf("新的数组为：");
//    for (i = 0; i < 11; i++) 
//    {
//        printf("  %d", a[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//void AAA(int* a, int m)
//{
//    int end, temp1, temp2;
//    int i, j;
//    end = a[9];
//    if (m >= end) 
//    {
//        a[10] = m;
//    }
//    else
//    {
//        for (i = 0; i < 10; i++)
//        {
//            if (a[i] > m)
//            {
//                temp1 = a[i];
//                a[i] = m;
//                for (j = i + 1; j < 11; j++)
//                {
//                    temp2 = a[j];
//                    a[j] = temp1;
//                    temp1 = temp2;
//                }
//                break;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int a[11] = { 13,27,38,49,65,76,97,105,208,361};
//    int m, i;
//    printf("请输入要插入的数:");
//    scanf_s("%d", &m);
//    AAA(a, m);
//    printf("新的数组为：");
//    for (i = 0; i < 11; i++) {
//        printf("  %d", a[i]);
//    }
//    return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int find(int* p, int n, int x)
{
	int i = 0;
	for (i = 0; i < n; i++,p++)
	{
		if (x == *p)
		{
			return 1;
		}
		else
			return 0;
	}
}
int main()
{
	int a[100] = { 0 };
	int i = 0;
	int x = 0;
	
	for (i = 0; i < 100; i++)
	{
		srand((unsigned int)time(NULL));
		a[i] = rand() % 100;//为a数组随机生成1-100的随机数；
	}
	int* p = &a;
	printf("请输入想要找的数:");
	scanf_s("%d", &x);
	int ret = find(p, 100, x);
	printf("%d", ret);
	return 0;
}