#include<process_copy.h>

int main(int argc,char* argv[]){
	int begin=atoi(argv[4]);
	int size=atoi(argv[3]);
	int fd1 = open(argv[1],O_RDONLY);
	if(-1 == fd1){ 
    	perror("copy open error");
		return -1;
	}
	int fd2=open(argv[2],O_WRONLY|O_CREAT,0664);
	if(-1==fd2){
		printf("open destfile fail\n");
		close(fd1);
	}
	printf("begin=%d,size=%d\n",begin,size);
	char buf[size];
	memset(buf,0,sizeof(buf));
	lseek(fd1,begin,SEEK_SET);
	read(fd1,buf,sizeof(buf));
	lseek(fd2,begin,SEEK_SET);
	close(fd1);
	close(fd2);

      
}
