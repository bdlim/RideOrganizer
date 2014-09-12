//
//  BLGroup.h
//  RideOrganizer
//
//  Created by Brandon Lim on 9/11/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLGroup : NSObject

@property (nonatomic, strong) NSString *groupName;
@property (nonatomic, strong) NSMutableArray *friends;

- (id)initWithName:(NSString *)groupName;



@end
