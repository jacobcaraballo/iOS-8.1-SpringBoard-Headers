/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBIconAnimator, SBRemoteAlertAdapter;

@interface SBUIAnimationZoomUpInCallAlertFromHome : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAlertManager *_alertManager;
    SBIconAnimator *_iconAnimator;
}

- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (void)dealloc;
- (id)initWithAlert:(id)arg1 andAlertManager:(id)arg2;

@end

