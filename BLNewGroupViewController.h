//
//  BLNewGroupViewController.h
//  RideOrganizer
//
//  Created by Brandon Lim on 9/11/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLGroup.h"

@class BLNewGroupViewController;

@protocol BLNewGroupViewControllerDelegate <NSObject>
- (void)addGroupViewController:(BLNewGroupViewController *)controller didFinishEnteringGroup:(BLGroup *)group;
@end

@interface BLNewGroupViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *groupName;
@property (strong, nonatomic) NSMutableArray *group;
@property (nonatomic, weak) id <BLNewGroupViewControllerDelegate> delegate;

- (IBAction)addGroup:(id)sender;

@end
