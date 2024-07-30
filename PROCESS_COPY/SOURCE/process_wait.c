#include<process_copy.h>

void process_wait(){
	pid_t pid;
	int status;
	while((pid == waitpid(-1,&status,WNOHANG)!= -1)){
		if(WIFEXITED(status))
						    printf("parent wait %d success, 正常退出 child exit code %d\n",pid,WEXITSTATUS(status));
		 if(WIFSIGNALED(status))
							printf("parent wait %d success, 异常退出 signal number %d\n",pid,WTERMSIG(status));
	}
}
