#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    int in = 0;
    int out = 0;
    
    for(int i = 0; i < N; i++){
        int number;
        scanf("%d", &number);
        
        if (number >= 10 && number <= 20){
            in++;
        } else {
            out++;
        }
    }
    
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
