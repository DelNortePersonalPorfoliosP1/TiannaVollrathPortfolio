3//
//  main.c
//  Pythagoras Lab
//
//

#include <stdio.h>
#include <math.h>

int pythagoras(void) {
    
    // input
    double side1;
    double side2;
    printf("Hello, we will help you do pythagorean theorum!\n");
    printf("what is side1 ");
    scanf("%lf",&side1);
    printf("what is side2 ");
    scanf("%lf",&side2);
    
    // calculation
    double side3 = sqrt(side1*side1 + side2*side2);
    printf ("the hypotenuse is %lf\n",side3);
    
    return 0;
}



