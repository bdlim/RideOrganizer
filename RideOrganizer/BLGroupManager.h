//
//  BLGroupManager.h
//  RideOrganizer
//
//  Created by Brandon Lim on 9/12/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLGroupManager : NSObject {
    NSMutableArray *groups;
}

@property (nonatomic, strong) NSMutableArray *groups;

+ (id)sharedGroups;

@end
