//
//  AppDelegate.h
//  ObjectivecDemo
//
//  Created by Pratik Panda on 17/04/17.
//  Copyright © 2017 Pratik Panda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

