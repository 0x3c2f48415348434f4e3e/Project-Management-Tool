#pragma once
#include "../include/dec.h"
#include <errno.h>
static int doesArgumentExist(char * argument);
bool True = T;
bool False = F;

static int doesArgumentExist(char * argument){
    char * possibleArguments[] = {"--help","init"};
    int arrayLength = sizeof(possibleArguments) / sizeof(possibleArguments[0]);
    register int i; //quick access

    for(i=0; i<arrayLength; i++){
        //check if the given argument exist
        if(strcmp(argument,possibleArguments[i]) == 0){
            return True;
        }
    }

    printf("\nUnrecognized token\n");
    return False;
}


int main(int argc, char ** argv){

    //want the command to be like npm, where you can do 'npm init'


    /*
    In the command prompt, we have command line argument where
    1.) 0 is the name of the file
    2.) 1 is the first argument typed
    3.) 2 is the second
    4.) and so on
    */

    //check user enterterd the right number of command line argument
    if(argc != 3){
        fprintf(stderr,"Wrong argument entered... Exiting");
        return -1;
    }
    else{
        //check that each argument is right
        if(strcmp(argv[1],"pm") == 0 || strcmp(argv[1], "PM") == 0){
            //check if the given argument exist first
            if(doesArgumentExist(argv[2]) == 1){
                //help
                if(strcmp(argv[2],"--help") == 0){ 
                    //fprintf("\nHelp\n");
                    help();
                }

                //info
                if(strcmp(argv[2],"--info") == 0){ 
                    //fprintf("\nInfo\n");
                    help();
                }

                //initialise
                if(strcmp(argv[2],"--init") == 0){
                    fprintf(stdin,"Initialising Project");
                }

                //version
                if(strcmp(argv[2],"--version") == 0){ 
                    //fprintf(stdin,"\nversion\n");
                    help();
                }
            }
            else{
                fprintf(stderr,"Argument does not exists");
                exit(-1);
            }
            
        }
        else
        {
            printf("Argument can not be recognized. Exiting");
            return -1;
        }
    }
    return 0;
}