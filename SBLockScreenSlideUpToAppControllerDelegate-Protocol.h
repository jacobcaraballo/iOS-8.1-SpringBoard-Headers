/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

@protocol SBLockScreenSlideUpToAppControllerDelegate
- (void)addGrabberView:(id)arg1 toLockScreenView:(id)arg2 forController:(id)arg3;
- (void)adjustWallpaperForVerticalScrollPercentage:(double)arg1;
- (_Bool)controllerShouldInvertVerticalPadding:(id)arg1;
- (_Bool)controllerShouldUseAdditionalTopPadding:(id)arg1;
- (id)grabberViewInLockScreenView:(id)arg1 forController:(id)arg2;
- (_Bool)isAnotherSlideUpControllerBlockingController:(id)arg1;
- (void)passcodeViewDidBecomeActive:(_Bool)arg1 forController:(id)arg2;
- (void)prepareForSlideUpAppLaunchAnimated:(_Bool)arg1;
- (long long)presentingControllerIdentifierForController:(id)arg1;
- (void)setUnlockActionContext:(id)arg1;
- (void)updateSlideToUnlockTextForController:(id)arg1;
- (id)viewControllerToUseAsParent;
@end
