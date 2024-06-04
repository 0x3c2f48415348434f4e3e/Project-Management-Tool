#pragma once
#include "../include/dec.h"
//file for help command
void help(void){
    char *possibleHelpOptions[3] = {"\n1.) --info\nImprove your project creation with this dynamic tool! Say goodbye to tedious setup processes and hello to streamlined project management. Effortlessly initialise and manage your project with just a","\n2.) --init\ninitate a new repository\n","\n3.) --version\n will show version"};
    int arrayLength = sizeof(possibleHelpOptions) / sizeof(possibleHelpOptions[0]);
    register int i; //quick access
    for(i=0;i<arrayLength;i++){
        printf("%s\n",possibleHelpOptions[i]);
    }

    return;
}
