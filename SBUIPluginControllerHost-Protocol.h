/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SBUIPluginControllerHost <NSObject>
- (void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(long long)arg2 animated:(_Bool)arg3;
- (void)uiPlugin:(id)arg1 isNowRunning:(_Bool)arg2;
- (_Bool)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3;
- (_Bool)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(_Bool)arg4;
- (_Bool)uiPlugin:(id)arg1 openURL:(id)arg2;
- (void)uiPlugin:(id)arg1 setExpectsFaceContact:(_Bool)arg2;
- (_Bool)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
- (_Bool)uiPluginExpectsFaceContact:(id)arg1;
- (void)uiPluginUserEventOccurred:(id)arg1;
- (_Bool)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(id)arg3;
- (void)uiPluginWantsDismissal:(id)arg1 withAnimation:(_Bool)arg2;
@end

