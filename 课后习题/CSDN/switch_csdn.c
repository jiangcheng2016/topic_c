#include stdio.h

int main()
{
    int a, b, c;
    printf(一二三等奖及优秀奖分别用1，2，3，4表示n 请依次输入原成绩和获奖等级n  input a,b);
    scanf(%d,%d,&a, &b);
    switch(b)
    {
        case 1
            c = a + 15;
            break;
        case 2
            c = a + 10;
            break;
        case 3
            c = a + 5;
            break;
        case 4
            c = a + 5;
            break;
        default
            printf(errorn);
    }
    if(c  100)
        printf(100);
    else
        printf(%d,c);
    return 0;
}