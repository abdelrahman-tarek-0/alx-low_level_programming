#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 *@c : char to ceck
 *Return: 1 if upper case 0 otherwise.
 */
int _isupper(int c){
    if(c >= 65 && c <= 90){
        return 1;
    }
    return 0;
}