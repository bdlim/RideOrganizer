//
//  BLGroupsTableViewController.h
//  RideOrganizer
//
//  Created by Brandon Lim on 9/5/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLGroupsTableViewCell.h"

@interface BLGroupsTableViewController : UITableViewController <SWTableViewCellDelegate>

@property (nonatomic, strong) NSArray *groups;

@end
