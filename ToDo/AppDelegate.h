//
//  AppDelegate.h
//  ToDo
//
//  Created by Mattt Thompson on 2012/11/13.
//  Copyright (c) 2012年 Heroku. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ToDoIncrementalStore.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;

@property (strong, nonatomic) UINavigationController *navigationController;

@end
