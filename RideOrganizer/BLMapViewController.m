//
//  BLMapViewController.m
//  RideOrganizer
//
//  Created by Brandon Lim on 9/1/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import "BLMapViewController.h"
#import <GoogleMaps/GoogleMaps.h>
#import "BLFriend.h"

@interface BLMapViewController ()

@end

@implementation BLMapViewController {
    GMSMapView *mapView_;
}


- (void)viewDidLoad
{
    [super viewDidLoad];
    // Create a GMSCameraPosition that tells the map to display the
    // coordinate -33.86,151.20 at zoom level 6.
    GMSCameraPosition *camera = [GMSCameraPosition cameraWithLatitude:33.6543771
                                                            longitude:-117.842016
                                                                 zoom:15];
    mapView_ = [GMSMapView mapWithFrame:CGRectZero camera:camera];
    mapView_.myLocationEnabled = YES;
    self.view = mapView_;
    
    // Creates a marker in the center of the map.
    GMSMarker *marker = [[GMSMarker alloc] init];
    marker.position = CLLocationCoordinate2DMake(33.6543771, -117.842016);
    marker.title = @"Sydney";
    marker.snippet = @"Australia";
    marker.map = mapView_;
    
    BLFriend *geocoding = [[BLFriend alloc]init];
    [geocoding geocodeAddress:@"409 Stanford, Irvine, CA, 92612"];
    NSLog(@"Latitude: %@",[geocoding.geocode objectForKey:@"lat"]);
    NSLog(@"Longitude: %@", [geocoding.geocode objectForKey:@"lng"]);
    NSLog(@"Address: %@",[geocoding.geocode objectForKey:@"address"]);
    

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
