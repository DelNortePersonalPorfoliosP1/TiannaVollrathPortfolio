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
    int main()
    
        double Xvalue,Yvalue,Zvalue ;
        //message
        printf("Enter Xvalue");
        scanf("%1lf", &Xvalue);
        printf("Enter Yvalue");
        scanf("%1lf", &Yvalue);
        Zvalue = (Xvalue*Xvalue) + (Yvalue*Yvalue);
        Zvalue = sqrt(Zvalue);
        printf("Zvalue");
        return 0;
    

    return 0;
}
