/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIAnimationZoomUpApp.h"

@class SBAlert, SBAlertManager;

@interface SBUIAnimationZoomUpAppFromAlert : SBUIAnimationZoomUpApp
{
    SBAlertManager *_alertManager;
    SBAlert *_alert;
}

- (void)animateZoomWithCompletion:(id)arg1;
- (double)animationDelay;
- (double)animationDuration;
- (void)cleanupZoom;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 deactivatingAlert:(id)arg2 alertManager:(id)arg3;
- (void)prepareZoom;

@end

