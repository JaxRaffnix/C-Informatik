#include <stdio.h> 
struct point { double x; double y; }; 
int main() 
 { 
    struct point test; 
    test.x = .25; 
    test.y = .75; 
    printf("[%f %f]\n", test.x, test.y); 
    return 0; 
}

#include <stdio.h> 
typedef struct { double x; double y; } Point; 
int main1() 
{ 
    Point test; 
    test.x = .25; 
    test.y = .75; 
    printf("[%f %f]\n", test.x, test.y); 
    return 0; 
} 

#include <stdio.h> 
typedef struct { double x; double y; } Point2; 
int main2(void) { 
    Point2 test = {.25, .75}; 
    printf("[%f %f]\n", test.x, test.y); 
    return 0; 
} 