//
//  PizzaHat.m
//  PizzaHat
//
//  Created by benlu on 2/1/15.
//  Copyright (c) 2015 benlu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PizzaHat.h"

@implementation PizzaHat
@synthesize delegate;

-(void)OnPizzaok{
    [delegate callmefortakepizza:@"夏威夷Pizza"];
}

@end
