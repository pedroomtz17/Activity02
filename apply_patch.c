#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    if(argc != 2){
    fprintf(stderr,"usage: ./apply_patch <filename> \n");
    exit(1);
    }
    char* arg_list[] = {
        "git",
        "apply",
        argv[1],
        NULL
    };
    execvp("git",arg_list);
	return 0;
}

