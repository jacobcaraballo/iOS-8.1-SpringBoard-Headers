/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SBLockScreenViewDelegate <NSObject>
- (void)addCoordinatedPresentingController:(id)arg1;
- (id)effectiveCustomSlideToUnlockText;
- (_Bool)isAllowingWallpaperBlurUpdates;
- (void)lockScreenView:(id)arg1 didEndScrollingOnPage:(long long)arg2;
- (void)lockScreenView:(id)arg1 didScrollToPage:(long long)arg2;
- (void)lockScreenViewDidBeginScrolling:(id)arg1;
- (void)lockScreenViewDidScrollWithNewScrollPercentage:(double)arg1 tracking:(_Bool)arg2;
- (_Bool)lockScreenViewIsCurrentlyBeingDisplayed;
- (_Bool)lockScreenViewPhonePluginIsActive;
- (void)lockScreenViewWillEndDraggingWithPercentScrolled:(double)arg1 percentScrolledVelocity:(double)arg2 targetScrollPercentage:(double)arg3;
- (void)removeCoordinatedPresentingController:(id)arg1;
- (_Bool)shouldShowSlideToUnlockTextImmediately;
- (_Bool)wantsToShowStatusBarTime;
@end
