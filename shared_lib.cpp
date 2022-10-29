#include "shared_lib.h"
#include <cstdio>
void pipecommand(string strcmd){
	std::Array <char,80> buffer;
	FILE *pipe = popen(strcmd.c_str(), "r");
	if(!pipe){
		std::cerr <<"cannot opend \n";
	}
	int c=0;
	while(fgets(buffer.data(), 80, pipe)!=NULL){
		c++;std::cout<<c"\t"<<buffer.data;
	}
	pclose(pipe);
}
/*-----------------------*/
void sum(int a, int b){
	int result;
	result=a+b;
	printf("%d\n",result);
}