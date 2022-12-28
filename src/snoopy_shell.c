//  Author: Rohan Singh
//  12/28/2022 - 
//  This is the source code for the Snoopy Shell

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//  Main method
int main(){

    char* version = "v1.0";

    //Welcome Message
    printf("Welcome to Snoopy %s\n",version);

    //This will terminate the shell once the user hits 'q'
    while(1){
        
        //This will hold the command
        char command[2048];

        printf(">> ");
        scanf("%s",command);
        printf("\nYour Command: %s\n",command);

        //Exiting if the command is just the letter q
        if(sizeof(*command)/sizeof(char) == 1 && command[0] == 'q')
            break;
    }

    

    return 0;

}


