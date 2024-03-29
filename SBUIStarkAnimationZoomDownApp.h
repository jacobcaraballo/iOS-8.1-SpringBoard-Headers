/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, UIView;

@interface SBUIStarkAnimationZoomDownApp : SBUIStarkScreenAnimationController
{
    SBAlert *_alertImpersonator;
    UIView *_viewToAnimate;
}

- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDelay;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (double)animationDuration;
- (double)animationStartTime;
- (id)appSettings;
- (void)dealloc;
- (id)initWithDeactivatingApp:(id)arg1 starkScreenController:(id)arg2;
- (id)initWithDeactivatingApp:(id)arg1 withAlertImpersonator:(id)arg2 starkScreenController:(id)arg3;
- (_Bool)prefersLayerHostSnapshot;

@end

