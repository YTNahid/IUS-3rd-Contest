// https://toph.co/p/is-prime
#include <stdio.h>
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif

    int a, x = 0, i;
    scanf("%d", &a);

    for(i = 2; i < a; i++) {
        if(a%i == 0) {
            x = 1;
            break;
        }
    }

    if(x || a == 1) printf("NO");
    else printf("YES");
}
