#include <stdio.h>
#include <time.h>

int main() {
    time_t timep;
    struct tm *tblock;

    time(&timep);//获取时间
    //将时间转化为字符串格式   方式1
    //char *ctime(const time_t *timep);
    printf("ctime/timep is %s\n",ctime(&timep));

    /*将时间转化为格林威治时间
     *struct tm *gmtime(const time_t *timep);
     * */

    /* 时间转换为字符格式（方式2），注意这个函数的参数是tm 结构的
     * char *asctime(const struct tm *tm);
     * */

    printf("asctime is %s\n",asctime(gmtime(&timep)));

    /*时间转化为本地时间
     * struct tm *localtime(const time_t *clock);
     * */
    tblock = localtime(&timep);
    printf("localtime is :%s\n",asctime(tblock));
    printf("localtime is:%s\n",ctime(&timep));
    return 0;
}