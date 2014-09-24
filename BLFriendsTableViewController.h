//
//  BLFriendsTableViewController.h
//  RideOrganizer
//
//  Created by Brandon Lim on 9/12/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLGroup.h"
#import "BLFriendsTableViewCell.h"

@interface BLFriendsTableViewController : UITableViewController <SWTableViewCellDelegate>

@property (nonatomic, strong) BLGroup *group;

@end
