//
//  ViewController.h
//  cs441_project2
//
//  Created by Ahmed Ihsan Erdem on 12.02.2019.
//  Copyright © 2019 Ahmed Ihsan Erdem. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Table.h"

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet Table *table;
@property (strong, nonatomic) IBOutlet UISwipeGestureRecognizer *upSwipe;
@property (strong, nonatomic) IBOutlet UISwipeGestureRecognizer *rightSwipe;
@property (strong, nonatomic) IBOutlet UISwipeGestureRecognizer *downSwipe;
@property (strong, nonatomic) IBOutlet UISwipeGestureRecognizer *leftSwipe;

@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;
@property (weak, nonatomic) IBOutlet UILabel *highScoreLabel;
@property (weak, nonatomic) IBOutlet UILabel *gameButton;

- (void)updateScore;

@end
