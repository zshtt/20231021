#include<stdio.h>
#include<pthread.h>
#include<signal.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/fcntl.h>
#include<unistd.h>
#include<sys/wait.h>


//检查参数
int check_pram(int argc,char* src_file, int pronum);

//创建进程
int process_create(char*src_file, char* dest_file,int pronum,int blocksize);
//阻塞
int process_block_cur(char* src_file,int pronum);
//等待
void process_wait();
//复制
void copy(char* src_file, char* dest_file, int blocksize, int pos);
