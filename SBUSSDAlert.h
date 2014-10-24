/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBAlert.h"

@class NSTimer;

@interface SBUSSDAlert : SBAlert
{
    unsigned int _receivedString:1;
    unsigned int _dismissOnActivate:1;
    NSTimer *_delayedDismissTimer;
}

+ (void)_daemonRestart:(id)arg1;
+ (void)_newSIM:(id)arg1;
+ (id)errorStringForCode:(id)arg1;
+ (void)registerForAlerts;
+ (void)registerForSettingsAlerts;
+ (void)test;
- (void)USSDStringAvailable:(id)arg1 allowsResponse:(_Bool)arg2;
- (void)_delayedDismiss;
- (void)activate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (_Bool)allowsResponse;
- (void)deactivate;
- (void)dealloc;
- (_Bool)receivedString;
- (_Bool)sentResponse;
- (void)setDismissOnActivate:(_Bool)arg1;
- (long long)statusBarStyle;

@end

