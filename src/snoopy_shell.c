//  Author: Rohan Singh
//  12/28/2022 - 
//  This is the source code for the Snoopy Shell

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "/Users/rohansingh/github_repos/Snoopy/src/basics/arithmetic.h"


//  This method will be used to process the commands entered into the shell
void process_command(char* str);

//  These are the other methods
void process_arithmetic(char* str);

//  End of the other method headings

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
        //printf("\nYour Command: %s\n",command);

        //Exiting if the command is just the letter q
        if(sizeof(*command)/sizeof(char) == 1 && command[0] == 'q')
            break;

        process_command(command);
        
    }

    printf("Leaving the Shell.....\n\n");

    return 0;

}


//  Implementation of the process_commands method
void process_command(char* command){

    //Splitting the command 
    char* library;
    char* function;

    library = strtok(command,".");
    function = strtok(NULL,".");

    if(strcmp(library,"arithmetic") == 0){
        process_arithmetic(function);
    }
    else{
        printf("Invalid Library\n");
    }  
    
}


//  Otherprocessing methods
void process_arithmetic(char* function_cmd){

    char* function;
    char* values;

    function = strtok(function_cmd,"(");
    values = strtok(NULL,"(");

    if(strcmp(function,"add") == 0){
        double d = snoopy_add(values);
        printf("%f\n",d);
    }
    else if(strcmp(function,"subtract") == 0){
        double d = snoopy_subtract(values);
        printf("%f\n",d);
    }
    else if(strcmp(function,"multiply") == 0){
        double d = snoopy_multiply(values);
        printf("%f\n",d);
    }
    else if(strcmp(function,"divide") == 0){
        double d = snoopy_divide(values);
        printf("%f\n",d);
    }
    else{
        printf("Invalid Function\n");
    }




}


