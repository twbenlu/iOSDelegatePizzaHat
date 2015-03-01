//
//  PizzaHat.h
//  PizzaHat
//
//  Created by benlu on 2/1/15.
//  Copyright (c) 2015 benlu. All rights reserved.
//

#ifndef PizzaHat_PizzaHat_h
#define PizzaHat_PizzaHat_h

#import <Foundation/Foundation.h>
#import "PhoneCallProtocol.h"

@interface PizzaHat : NSObject
@property (nonatomic,assign) id<getnotificationDelegate> delegate;
-(void) OnPizzaok;
@end


#endif
