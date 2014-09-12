//
//  BLNewGroupViewController.h
//  RideOrganizer
//
//  Created by Brandon Lim on 9/11/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLGroup.h"
#import "BLGroupManager.h"

@interface BLNewGroupViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *groupName;
@property (strong, nonatomic) NSMutableArray *group;

- (IBAction)addGroup:(id)sender;

@end
