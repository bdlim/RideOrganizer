//
//  BLAppDelegate.m
//  RideOrganizer
//
//  Created by Brandon Lim on 9/1/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import "BLAppDelegate.h"
#import <GoogleMaps/GoogleMaps.h>


@implementation BLAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [GMSServices provideAPIKey:@"AIzaSyBq3mLIjdfUsJWFYMCOxEXEdkzrDaOKfBQ"];
    
    return YES;
}


@end
