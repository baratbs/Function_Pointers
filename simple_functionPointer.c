#include<stdio.h>
void display();


typedef int (*jsonPrintCallbackFxn)();

int main(){
    

    jsonPrintCallbackFxn printCallback;

    display();
    printCallback=display;
    printCallback();
    printf("Done success");
}

void display(){
    printf("Function Display print\n");
}
