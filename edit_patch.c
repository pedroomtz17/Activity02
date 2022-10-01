#include <stdio.h>
#include <stdlib.h>


void main(){
  FILE *file = NULL;
  char update_path[1024];
  file=fopen("changes_2.patch","r+");
  if(file==NULL){
    printf("Error opening file");
    exit(1);
  }
  fseek(file,85,SEEK_SET);
  printf("Update execution path of changes_2.patch: ");
  fgets(update_path,1024, stdin);
  fputs(update_path,file);
  fclose(file);
}