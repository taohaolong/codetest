#include <stdio.h>
#include <time.h>

void init_daemon(void);//守护进程初始化函数

main()
{
    FILE *fp;
    time_t t;
    init_daemon();//初始化为Daemon

    while(1)//每隔一分钟向test.log报告运行状态
    {
        sleep(1);//睡眠一分钟
        if((fp=fopen("thao.log","a")) >=0){
            t=time(0);
            fprintf(fp,"The programe run here at %s",asctime(localtime(&t)) );
            fclose(fp);
        }
    }
}
