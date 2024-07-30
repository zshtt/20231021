#include<process_copy.h>

int process_block_cur(char* src_file,int pronum){
    int fd1 = open(src_file,O_RDONLY);
	if(-1 == fd1){
		perror("blocksize open error");
		return -1;
	}
	int size = lseek(fd1,0,SEEK_END);
	close(fd1);
	int num=size/pronum+1;
	return num;
}
