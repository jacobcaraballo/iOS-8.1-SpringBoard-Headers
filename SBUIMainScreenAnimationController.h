/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBUIAnimationController.h"

@interface SBUIMainScreenAnimationController : SBUIAnimationController
{
    _Bool _needsToClearBulletinWindowOrientation;
}

- (void)__startAnimation;
- (void)_cleanupAnimation;
- (void)_clearBulletinWindowOverrideOrientationIfNecessary;
- (void)_dismissBannerAnimated:(_Bool)arg1;
- (id)_getTransitionWindow;
- (void)_noteAnimationDidCommit:(_Bool)arg1 withDuration:(double)arg2 afterDelay:(double)arg3;
- (void)_removeWallpaperAnimationPriorityWithFactory:(id)arg1;
- (_Bool)_shouldDismissBanner;
- (void)beginAnimation;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;

@end

