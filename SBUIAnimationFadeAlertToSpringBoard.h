/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBLockToAppStatusBarAnimator;

@interface SBUIAnimationFadeAlertToSpringBoard : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
}

- (void)_startAnimation;
- (void)dealloc;
- (id)initFromAlert:(id)arg1;

@end

