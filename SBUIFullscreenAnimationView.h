/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@interface SBUIFullscreenAnimationView : UIView
{
    id <SBUIFullscreenAnimationViewDelegate> _delegate;
    _Bool _animating;
}

- (void)_animationBegan;
- (void)_animationEnded;
- (void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2;
- (void)_notifyDelegateThatAnimationIsDone;
@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void)beginTransition;
@property(nonatomic) id <SBUIFullscreenAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endTransition;
- (void)setFromView:(id)arg1;
- (void)setToView:(id)arg1;

@end

