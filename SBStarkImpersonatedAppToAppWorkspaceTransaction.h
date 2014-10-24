/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert, SBAlertChangeTransaction;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBAlertChangeTransaction *_deactivateAlertTransaction;
    SBAlert *_deactivatingAlert;
    _Bool _animatedAppActivation;
}

- (void)_deactivateAlertIfPossible;
- (void)_didComplete;
- (void)_doCommit;
- (void)_handleFailureToLaunch;
- (id)_newAnimationFromAppToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToNowPlaying;
- (void)_setupMilestonesFrom:(id)arg1 to:(id)arg2;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)dealloc;
- (id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;

@end

