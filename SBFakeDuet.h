/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSArray;

@interface SBFakeDuet : NSObject
{
    NSArray *_triggers;
    NSArray *_appsToLaunch;
    id _recommendationHandler;
}

+ (id)sharedInstance;
- (void)_frontDisplayChanged:(id)arg1;
- (void)_handleTrigger:(id)arg1;
- (void)_refreshAppsToLaunch;
- (void)_refreshTriggers;
- (void)_switcherRevealed:(id)arg1;
- (void)_wake:(id)arg1;
@property(retain, nonatomic) NSArray *appsToLaunch; // @synthesize appsToLaunch=_appsToLaunch;
- (void)dealloc;
- (id)init;
- (void)okToLaunch:(id)arg1 forReasons:(id)arg2 withHandler:(id)arg3;
@property(copy, nonatomic) id recommendationHandler; // @synthesize recommendationHandler=_recommendationHandler;
- (void)setAppLaunchRecommendationHandler:(id)arg1;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;

@end

