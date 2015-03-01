//
//  main.m
//  PizzaHat
//
//  Created by benlu on 2/1/15.
//  Copyright (c) 2015 benlu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"
#import "PizzaHat.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        PizzaHat *pizzaHat = [[PizzaHat alloc]init];
        User *user = [[User alloc]init];
        pizzaHat.delegate =  user;
        [pizzaHat OnPizzaok];
    }
    return 0;
}
