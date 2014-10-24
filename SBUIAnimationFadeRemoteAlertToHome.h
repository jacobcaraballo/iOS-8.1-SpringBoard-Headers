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

@interface SBUIAnimationFadeRemoteAlertToHome : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBRemoteAlertAdapter *_alert;
    long long _targetStatusBarStyle;
}

- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithDeactivatingAlert:(id)arg1 alertManager:(id)arg2;

@end
