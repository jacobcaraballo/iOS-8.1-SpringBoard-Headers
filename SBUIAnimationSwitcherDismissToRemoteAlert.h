/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationSwitcherDismissToRemoteAlert : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAlertManager *_alertManager;
}

- (void)_cleanupAnimation;
- (void)_deferredAlertActivationStuff;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithDeactivatingApp:(id)arg1 toRemoteAlert:(id)arg2 alertManager:(id)arg3;

@end
