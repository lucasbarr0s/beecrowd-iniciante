#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1;
    double x2, y2;
    double distance, root;
    
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    
    distance = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    root = sqrt(distance);
    
    printf("%.4lf\n", root);
 
    return 0;
}
