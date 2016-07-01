//
//  ColorWheel.h
//  FunFacts
//
//  Created by Chris Vanderhorst on 25/06/2016.
//  Copyright © 2016 Wekonnect. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong,nonatomic) NSArray *color;
-(UIColor *)randomColor;


@end
