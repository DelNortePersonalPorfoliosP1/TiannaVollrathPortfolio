//
//  main.c
//  tiannavollrathlab1
//
//  Created by Vollrath, Tianna on 9/13/19.
//  Copyright © 2019 Vollrath, Tianna. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int main;
    
        double Xvalue,Yvalue,Zvalue ;
        //message
        puts("Enter Xvalue");
        scanf("%1lf", &Xvalue);
        puts("Enter Yvalue");
        scanf("%1lf", &Yvalue);
        Zvalue = (Xvalue*Xvalue) + (Yvalue*Yvalue);
    Zvalue = sqrt(Zvalue);
        puts("Zvalue");

    

    return 0;
}
