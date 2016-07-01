//
//  FactBook.h
//  FunFacts
//
//  Created by Chris Vanderhorst on 25/06/2016.
//  Copyright © 2016 Wekonnect. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject
@property (strong, nonatomic) NSArray *facts;

-(NSString *)randomFact;
@end
