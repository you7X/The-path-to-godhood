/*
//c语言的第一个程序
#include <stdio.h>//引入输入输出的头文件
//.h是头文件
//.c是c的源文件
//.cpp是c++的源文件，兼容c
//vs code的使用
int main()//main译为主要的，是主函数；程序的入口；有且只有一个
{
    printf("hello C\n");//printf是包含在stdio.h中别人写好的函数
    return 0;//返回零正常
}
//注释分为两种：行注释和块注释
*/
//求两个整数之和
#include<stdio.h>
int main()
{
    int a=123;//定义整型变量a=123
    int b=456;//定义整形变量b值为456
    int sum=a+b;//定义整型变量sum值为a与b的和
    printf("%d",sum);//打印sum的值，输出函数%d为格式化符
    return 0;
}
