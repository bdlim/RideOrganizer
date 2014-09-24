//
//  BLCoreDataStack.h
//  RideOrganizer
//
//  Created by Brandon Lim on 9/24/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCoreDataStack : NSObject

+ (instancetype)defaultStack;

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
