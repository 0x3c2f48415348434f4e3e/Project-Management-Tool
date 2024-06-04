#pragma once
#include "../include/dec.h"

static void createDirectory(char* dirName);
static void input();

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

static void createDirectory(char* dirName){
//Boilerplate Repository Initialization: Allow users to easily initialize a project with a pre-configured boilerplate repository 
//tailored to various project types (e.g., web development, mobile app development, data science projects).


//make direcotry
//https://www.geeksforgeeks.org/create-directoryfolder-cc-program/

if(mkdir(dirName,MODE) == -1){
    int error = errno;
    fprintf(stderr,strerror(error));
    exit(-1);
}
//0777 permission in c

fprintf(stdout,"Directory created");
}

void boilerPlateInitialization(){
    //prompt user to enter the project they are working on
    char *possibleProjects[] = {"Web development\nTechnologies\n1.) HTML\n2.) CSS\n3.) Javascript"}; //For now only support web development
    int sizeOfArray = sizeof(possibleProjects) / sizeof(possibleProjects[0]);
    //prompt user to enter what they want
    fprintf(stdin,"What boiler plate would you like to create");
    register int i = 0;

    for(i;i<sizeOfArray; i++){
        printf("%s",possibleProjects[i]);
    }
}

static  void input(){
    //so what we want to do is allow user to enter
    //characters in the input and we read from the stdin
    int pointer = 0;
    int numOfResize = 1;
    char *userInput = (char*) malloc(sizeof(char)*BUFFERSIZE);
    int character = getc(stdin);
   //inputs in c
   //https://www.geeksforgeeks.org/eof-and-feof-in-c/
    while(1){
        if(character == EOF || character == '\n'){
            break;
        }
        else{
            //in order to make sure we do not run over
            //the allocated buffer, we have to do something
            //smart and that is check if the pointer
            //is above the BUFFERSIZE, and if so
            //reallocate
            if(pointer >= BUFFERSIZE){
                numOfResize+=1;
                //do stuff
                //we will reallocat the size
                userInput = (char *) realloc(userInput,(numOfResize*BUFFERSIZE));
            }
            else{
                    userInput[pointer] = character;
                    character = getc(stdin);
                    pointer++;
            }
        }
    }
    printf("%s\n",userInput);
    
    free(userInput);

    return;
}