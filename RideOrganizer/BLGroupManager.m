//
//  BLGroupManager.m
//  RideOrganizer
//
//  Created by Brandon Lim on 9/12/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import "BLGroupManager.h"

@implementation BLGroupManager

@synthesize groups;

#pragma mark Singleton Methods

+ (id) sharedGroups {
    static BLGroupManager *sharedGroupManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedGroupManager = [[self alloc] init];
    });
    return sharedGroupManager;
}

- (id)init {
    if (self = [super init]) {
        groups = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)dealloc {
    
}

@end
