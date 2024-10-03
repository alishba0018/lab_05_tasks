#include <stdio.h>
int main() {
    char A;
    char encrypted_char;
    char decrypted_char;
    int key;
    printf("enter a character to encrypt (only capital letters):");
    scanf("%c",&A);
    printf("enter key:");
    scanf("%d",&key);
    encrypted_char= A + key;
    decrypted_char=encrypted_char-key;
    printf("ecryption value is: %c \n",encrypted_char);
    printf("decryption value is: %c",decrypted_char);
    

return 0;
}