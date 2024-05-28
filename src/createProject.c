#include "../include/dec.h"

int createProject(char* projectName){
    //Check if the given project name exist within the current working directory
    struct stat buf;
    if(stat(projectName, &buf) ==  0){
        printf("THis directory can not be created");
        return 0;
    }

    printf("Directory does not exist");
    return 1;
}