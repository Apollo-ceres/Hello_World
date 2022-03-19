# include <iostream>
using namespace std;
/* 
说明 C++中不再区分初始化和未初始化的全局变量、静态变量的存储区，如果非要区分下述程序标注旨在了括号中
*/
int g_var =0; // g_var 在全局区（。data段）
char *gp_var; //gp_var 在全局区 （。bss段）
int main()
{
    int var;                  // var在栈区
    char *p_var；             // p_var在栈区
    char arr[]="abc"          // arr为数组变量，存储在栈区；“abc为字符串量，存储在常量区”
    char *p_var1="123456"；   // p_var1在栈区；“123456”为字符串常量，存储在常量区
    static int s_war=0;       //s_war为静态常量，存在静态存储区（.data段）
    p_var=(char *)malloc(10); //分配来的10个字节的区域在堆区
    free(p_var);
    return 0
}