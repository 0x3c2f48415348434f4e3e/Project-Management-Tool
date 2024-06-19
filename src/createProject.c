#include "../include/dec.h"

static void createDirectory(char* dirName);
static char* input();

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

void boilerPlateInitializationWithCookieCutter(){
    //This will use the functionality of CookieCutter to get a list of project within the URL and show users the possible projects available
    char URL = "https://github.com/"


//The below URL are example structure of the URL we want to donwload the template from, so in that case, we have to actually search for the name of the github project, meaning we might need to scrape the github part
//https://github.com/cookiecutter/cookiecutter
//https://github.com/cookiecutter/cookiecutter-django
    char *ProjectChoice = input();

    free(ProjectChoice);
    
}

static char* input(){
    //so what we want to do is allow user to enter
    //characters in the input and we read from the stdin
    int pointer = 0;
    int numOfResize = 1;
    static char *userInput;
    userInput = (char*) malloc(sizeof(char)*BUFFERSIZE);
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

    return userInput;
}
