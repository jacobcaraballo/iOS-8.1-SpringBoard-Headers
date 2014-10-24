/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SBUIUserAgent <NSObject>
- (void)activateModalBulletinAlert:(id)arg1;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2 activationHandler:(id)arg3 deactivationHandler:(void)arg4;
- (long long)activeInterfaceOrientation;
- (void)addActiveInterfaceOrientationObserver:(id)arg1;
- (void)adjustLockScreenContentByOffset:(double)arg1 forAwayViewPlugin:(id)arg2 withAnimationDuration:(double)arg3;
- (_Bool)alertIsActive;
- (_Bool)applicationInstalledForDisplayID:(id)arg1;
- (_Bool)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2;
- (_Bool)canLaunchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2;
- (_Bool)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
- (_Bool)canUserLaunchIcon;
- (struct CGRect)defaultContentRegionForAwayViewPlugin:(id)arg1 withOrientation:(long long)arg2;
- (_Bool)deviceIsBlocked;
- (_Bool)deviceIsLocked;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)deviceIsPasscodeLockedRemotely;
- (_Bool)deviceIsTethered;
- (void)dimScreen:(_Bool)arg1;
- (void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2;
- (id)foregroundApplicationDisplayID;
- (id)foregroundDisplayID;
- (_Bool)isApplicationForegroundObscured:(id)arg1;
- (_Bool)isIdleTimerDisabledForReason:(id)arg1;
- (_Bool)isSBUILoggingEnabled;
- (_Bool)isScreenOn;
- (_Bool)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3;
- (_Bool)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3;
- (_Bool)launchDisplayWithURL:(id)arg1 forCall:(_Bool)arg2 sender:(id)arg3;
- (_Bool)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(_Bool)arg3 animate:(_Bool)arg4;
- (_Bool)launchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(_Bool)arg3 animate:(_Bool)arg4 launchOrigin:(int)arg5;
- (_Bool)launchFromPushOrLocalBulletin:(id)arg1 actionIdentifier:(id)arg2 origin:(int)arg3;
- (_Bool)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(_Bool)arg4;
- (id)localizedDisplayNameForDisplayID:(id)arg1;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1 andDimScreen:(_Bool)arg2;
- (_Bool)lockScreenIsShowing;
- (id)modalBulletinAlertHandlerRegistry;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (void)notifyOnNextUserEvent;
- (_Bool)openURL:(id)arg1 allowUnlock:(_Bool)arg2 animated:(_Bool)arg3;
- (void)openURL:(id)arg1 animateIn:(_Bool)arg2 scale:(float)arg3 start:(double)arg4 duration:(float)arg5 animateOut:(_Bool)arg6;
- (void)prepareToAnswerCall;
- (void)removeActiveInterfaceOrientationObserver:(id)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)setIdleText:(id)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(_Bool)arg2;
- (void)setWallpaperTunnelActive:(_Bool)arg1 forFullscreenAlertController:(id)arg2;
- (_Bool)springBoardIsActive;
- (id)topSuspendedEventsOnlyDisplayID;
- (void)undimScreen;
- (void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1;
- (void)updateInterfaceOrientationIfNecessary;
- (void)updateLockScreenInterfaceIfNecessary;
@end

