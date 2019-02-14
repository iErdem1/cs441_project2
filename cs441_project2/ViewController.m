//
//  ViewController.m
//  cs441_project2
//
//  Created by Ahmed Ihsan Erdem on 12.02.2019.
//  Copyright © 2019 Ahmed Ihsan Erdem. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    currentScore = 0;
    highScore = [[NSUserDefaults standardUserDefaults] integerForKey:@"highScore"];
    [_highScoreLabel setText:[NSString stringWithFormat:@"High Score: %ld", highScore]];
    [_table enumarate]; 
}


@end
