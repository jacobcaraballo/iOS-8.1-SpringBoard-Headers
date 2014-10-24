/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert, SBApplication;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBAlert *_activatingAlert;
    _Bool _animatedAppDeactivation;
    SBApplication *_mainScreenAppThatWillBeActivated;
    id _mainScreenAppThatWillBeActivatedObserver;
}

- (void)_doCommit;
- (void)_finishCommit;
- (id)_newAnimationFromAppToApp;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromNowPlayingToApp;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(_Bool)arg2;
- (void)_setupMilestonesFrom:(id)arg1 to:(id)arg2;
- (_Bool)_shouldDisallowSuspension;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)dealloc;
- (id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 to:(id)arg4;
- (id)swizzledToDisplayIfNecessary;

@end
