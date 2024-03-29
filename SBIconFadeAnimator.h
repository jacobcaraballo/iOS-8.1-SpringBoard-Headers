/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBIconAnimator.h"

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator
{
    UIView *_crossfadeView;
    _Bool _addedToWindow;
}

- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (void)_applyAlphaForFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2;

@end

