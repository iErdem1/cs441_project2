//
//  AppDelegate.h
//  cs441_project2
//
//  Created by Cihangir Umithan Goktolga on 12.02.2019.
//  Copyright © 2019 Ahmed Ihsan Erdem. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

