//  Author: Rohan Singh
//  28/12/2022
//  The purpose of this file is to debug buggy code

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //Using strok

    char message[80] = "arithmetic.add(3,3)";
    const char s[1] = ".";

    char* token;
   /*
    token = strtok(message,s);
    while(token != NULL){
        printf("%s\n",token);
        token = strtok(NULL,s);
    }
    */

    char values[1000] = "34.987,987.6);";

    char *parsed_values;
    parsed_values = strtok(values,")");
    printf("%s\n",parsed_values);
    

    char *val_1 = strtok(parsed_values,",");
    char *val_2 = strtok(NULL,",");


    double d1 = atof(val_1);
    double d2 = atof(val_2);
    printf("%f\n",d1+d2);

    return 0;

}