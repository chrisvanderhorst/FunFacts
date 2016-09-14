//
//  ViewController.m
//  FunFacts
//
//  Created by Chris Vanderhorst on 25/06/2016.
//  Copyright © 2016 Wekonnect. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

//sample change

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.factBook =[[FactBook alloc] init];
    self.colorWheel= [[ColorWheel alloc] init];
    
    UIColor *randomColor=[self.colorWheel randomColor];
    
    
    self.funFactButton.tintColor=randomColor;
    self.view.backgroundColor= randomColor;
    
    self.funFactLabel.text =[self.factBook randomFact];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showFunFact {
    
    UIColor *randomColor=[self.colorWheel randomColor];
    
    
    self.funFactButton.tintColor =randomColor;
    self.view.backgroundColor= randomColor;
    
    self.funFactLabel.text =[self.factBook randomFact];

    
    NSLog(@"CLICK");
}

@end
