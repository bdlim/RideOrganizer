//
//  BLGroup.m
//  RideOrganizer
//
//  Created by Brandon Lim on 9/11/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import "BLGroup.h"

@implementation BLGroup

- (id)initWithName:(NSString *)groupName {
    self = [super init];
    self.friends = [[NSMutableArray alloc]init];
    self.groupName = groupName;
    return self;
}

@end
