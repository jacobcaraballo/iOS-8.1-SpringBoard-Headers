/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@interface SBConferenceManager : NSObject
{
    _Bool _hasFaceTimeCapability;
    struct MGNotificationTokenStruct *_faceTimeCapabilityUpdateToken;
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)_faceTimeApp;
- (void)_faceTimeCapabilityChanged:(id)arg1;
- (void)_faceTimeStateChanged:(id)arg1;
- (void)_updateStatusBarForChat:(id)arg1;
- (id)activeFaceTimeCall;
- (_Bool)activeFaceTimeCallExists;
- (_Bool)canStartFaceTime;
- (id)currentCallRemoteUserId;
- (id)currentCallStatusDisplayString;
- (id)currentFaceTimeCall;
- (void)dealloc;
- (void)endFaceTime;
- (_Bool)faceTimeInvitationExists;
- (_Bool)faceTimeIsAvailable;
- (_Bool)hasFaceTimeCapability;
- (_Bool)inFaceTime;
- (id)incomingFaceTimeCall;
- (id)init;
- (void)invitedToIMAVChat:(id)arg1;
- (void)updateStatusBarForChat:(id)arg1;

@end
