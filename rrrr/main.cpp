//
//  main.cpp
//  rrrr
//
//  Created by 20141105048 on 15/11/11.
//  Copyright © 2015年 20141105048. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=100;
    p=&a;
    printf("a=%x  &a=%x  &p=%x  p=%x  *p=%x\n",a,&a,&p,p,*p);

    return 0;
}
