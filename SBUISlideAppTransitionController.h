/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIMainScreenAnimationController.h"

#import "SBUIFullscreenAnimationViewDelegate-Protocol.h"

@class SBUISlideAppTransitionView;

@interface SBUISlideAppTransitionController : SBUIMainScreenAnimationController <SBUIFullscreenAnimationViewDelegate>
{
    SBUISlideAppTransitionView *_transitionView;
    double _animationDelay;
    double _animationDuration;
    double _initiationTime;
}

- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)appTransitionView:(id)arg1 animationWillStartWithDuration:(double)arg2 afterDelay:(double)arg3;
- (void)appTransitionViewAnimationDidStop:(id)arg1;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;

@end

