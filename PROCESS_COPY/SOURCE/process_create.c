#include<process_copy.h>

int process_create(char* src_file,char*dest_file,int pronum,int blocksize){
	pid_t pid;
	int i = 0;
	for(i; i < pronum; i++){
		pid = fork();
		if(pid == 0)
			break;
	}
	if(pid > 0){

	}
	else if(pid == 0){
		int pos = i* blocksize;
		char str_blocksize[10];
		char str_pos[10];
		snprintf(str_blocksize,sizeof(str_blocksize)-1,"%d",blocksize);
		snprintf(str_pos,sizeof(str_pos)-1,"%d",pos);
		execl("/home/zsh/桌面/20231021/PROCESS_COPY/Mod/aa","aa",src_file,dest_file,str_blocksize,str_pos,NULL);
	}else{
		perror("fork error\n");
		exit(0);
	}
return 0;
}
