//
//  BLFriend.h
//  RideOrganizer
//
//  Created by Brandon Lim on 9/11/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLFriend : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSString *phoneNumber;
@property (nonatomic, strong) NSDictionary *geocode;


- (id)init;
- (void)geocodeAddress:(NSString *)address;

@end
