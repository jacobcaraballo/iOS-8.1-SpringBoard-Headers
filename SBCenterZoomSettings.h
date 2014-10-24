/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBIconZoomSettings.h"

@interface SBCenterZoomSettings : SBIconZoomSettings
{
    double _centerRowCoordinate;
    long long _distanceEffect;
    double _firstHopIncrement;
    double _hopIncrementAcceleration;
    double _dockMass;
}

+ (id)settingsControllerModule;
@property double centerRowCoordinate; // @synthesize centerRowCoordinate=_centerRowCoordinate;
@property long long distanceEffect; // @synthesize distanceEffect=_distanceEffect;
@property double dockMass; // @synthesize dockMass=_dockMass;
@property double firstHopIncrement; // @synthesize firstHopIncrement=_firstHopIncrement;
@property double hopIncrementAcceleration; // @synthesize hopIncrementAcceleration=_hopIncrementAcceleration;
- (void)setDefaultValues;

@end

