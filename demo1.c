//#include<stdio.h>
//#define price 30
//int main()
//{
//	int num, total;
//	num = 10;
//	total = num * price;
//	printf("total=%d", total);
//}
//#include <stdio.h>
//void main()
//{
//    int x = (int)"A";
//    int y = (int)'A';
//    printf("%d\n", x);
//    printf("%d\n", y);
//}
//#include <stdio.h>
//void main()
//{
//    printf("%c\n", \
//        ("Neusoft" + 2)[2]);
//}
#include <stdio.h>
//struct  student  //�ṹ������
//{
//    int num;
//    int age;
//    float score;
//};
//void main()
//{
//    struct student  stu1;//struct ����ʡ�� stu1������
//    stu1.age = 23;
//    stu1.num = 2001;
//    stu1.score = 89.5;
//    printf("%d %d %f \n", stu1.num, stu1.age, stu1.score);
//    int humidity = 50;
//    if (humidity < 30)
//    {
//        printf("ʪ�ȹ��ͣ�����ʪ��\n");
//    }
//    int mathscore = 67;
//    int num = mathscore / 10;  //100 90 A
//    switch (num)
//    {
//    case 10:
//    case 9:
//        printf("A\n");
//        break;
//    case 8:
//        printf("B\n");
//        break;
//    case 7:
//        printf("C\n");
//        break;
//    case 6:
//        printf("D\n");
//        break;
//    default:
//        printf("E\n");
//        break;
//    }
//}
void main()
{
	int i = 1, sum = 0; 	//��ʼ��ѭ�����Ʊ���i���ۼ���sum
	while (i <= 100) // i  1 2  ...  101�����ж�Ϊ�٣����ٽ���ѭ������ִ��
	{
		sum += i; 	//sum = sum+1 
		i++;	//ѭ�����Ʊ���i��1
	}
	printf("sum = % d\n", sum);
}