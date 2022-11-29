// https://codeforces.com/problemset/problem/443/A
#include <stdio.h>
#include <string.h>
 
int main() {

    char s[10000];
    gets(s);
    int len, i, j, count = 0, x = 0, k;

    len = strlen(s);

    for(i = 1; i < len; i+=3) {
        count++;
    } 

    for(i = 1; i < len; i+=3) {
        for(j = i+3; j < len; j+=3) {
            if(s[i] == s[j] && s[i] != ',') {
                x++;
                s[j] = ',';
            }
        }
    }
 
    if(len < 3) {
        printf("0");
    } else {
        printf("%d", count-x);
    }

}
