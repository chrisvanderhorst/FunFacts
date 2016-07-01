//
//  ViewController.h
//  FunFacts
//
//  Created by Chris Vanderhorst on 25/06/2016.
//  Copyright © 2016 Wekonnect. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic)  FactBook *factBook;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;
@property (strong,nonatomic) ColorWheel *colorWheel;
@end

