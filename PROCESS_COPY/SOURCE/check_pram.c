#include<process_copy.h>


int check_pram(int argc,char* src_file,int pronum){
         if(argc < 3){
		  printf("错误： 参数数量错误\n");
		  exit(0);
	  }
	  if(access(src_file,F_OK) != 0){
		  printf("错误：源文件错误\n");
		  exit(0);
	  }
	  if(pronum <= 0 || pronum > 80){
		  printf("错误：进程数量错误\n");
		  exit(0);
	  }
	  return 0;
}
