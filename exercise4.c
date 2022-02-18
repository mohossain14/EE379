//takes out vowels from a program

#include <stdio.h>

int main(void){
    char ch;
    
    printf("Enter a message, we will remove the vowels: ");
    ch = getchar();
    
    while(ch != '\n'){
        if (ch == 'a'){
            ch = getchar();
        }
        else if ( ch == 'A'){
            ch = getchar();
        }
        else if ( ch == 'e'){
            ch = getchar();
        }
        else if ( ch == 'E'){
            ch = getchar();
        }
        else if ( ch == 'i'){
            ch = getchar();
        }
        else if ( ch == 'I'){
            ch = getchar();
        }
        else if ( ch == 'o'){
            ch = getchar();
        }
        else if ( ch == 'O'){
            ch = getchar();
        }
        else if ( ch == 'u'){
            ch = getchar();
        }
        else if ( ch == 'U'){
            ch = getchar();
        }
        else{
            printf("%c", ch);
            ch = getchar();
        }
    }
    return 0;
}