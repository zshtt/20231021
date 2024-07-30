#include<process_copy.h>


int main(int argc, char *argv[]) {
if(argc<3||argc>4){
		perror("parameter num  error");
		return -1;
	}
	int pronum=5;
	if(argc!=3){
		pronum=atoi(argv[3]);
	}

	int err=check_pram(argc,argv[1],pronum);
	if(err==-1){
		perror("check parameter error");
		exit(0);
	}
	printf("parameter success\n");
	//分块大小
	int blocksize=process_block_cur(argv[1],pronum);
    if(-1==blocksize){
		printf("fenkuai error\n");
		exit(0);
	}
	//创建进程
	process_create(argv[1],argv[2],pronum,blocksize);
        //
        process_wait();

    return 0;
}
