#include<stdio.h>
int main(){
    char str[100];
    printf("do you wanna print something?");
    printf("\nplease write: ");
    fgets(str, sizeof(str),stdin);
    //fgets is used to read a string including spaces,already defined in stdio.h
    //fgets(string_name, size, input_stream);

    printf("You entered: %s",str);
    return 0;
}
