//
//  PhoneCallProtocol.h
//  PizzaHat
//
//  Created by benlu on 2/1/15.
//  Copyright (c) 2015 benlu. All rights reserved.
//

#ifndef PizzaHat_PhoneCallProtocol_h
#define PizzaHat_PhoneCallProtocol_h
#endif


#import <Foundation/Foundation.h>
//定義一個Protocal
@protocol getnotificationDelegate <NSObject>
@optional
- (void)callmefortakepizza:(NSString*)pizzatype;
@end