//
//  UIControls.h
//  Cordova
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

#import <Cordova/CDVPlugin.h>

@interface MapKitView : CDVPlugin <MKMapViewDelegate> 
{
}

@property (nonatomic, retain) UIView* childView;
@property (nonatomic, retain) MKMapView* mapView;

- (void)createView;

- (void)createViewWithOptions:(NSDictionary *)options; //Designated Initializer

- (void)showMap:(CDVInvokedUrlCommand *)command;

- (void)hideMap:(CDVInvokedUrlCommand *)command;

- (void)changeMapType:(CDVInvokedUrlCommand *)command;

- (void)destroyMap:(CDVInvokedUrlCommand *)command;

- (void)clearMapPins:(CDVInvokedUrlCommand *)command;

- (void)addMapPins:(CDVInvokedUrlCommand *)command;

- (void)openDrivingWithData:(CDVInvokedUrlCommand *)command;

@end
