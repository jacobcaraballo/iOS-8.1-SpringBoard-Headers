/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "FBDisplayManagerObserver-Protocol.h"
#import "FBProcessManagerObserver-Protocol.h"
#import "FBSceneManagerDelegate-Protocol.h"
#import "FBSceneManagerObserver-Protocol.h"
#import "FBWorkspaceDelegate-Protocol.h"
#import "SBSceneManagerDelegate-Protocol.h"

@class FBSceneManager, NSMutableDictionary, NSString, UIApplicationSceneClientSettingsDiffInspector;

@interface SBSceneManagerController : NSObject <FBSceneManagerDelegate, FBSceneManagerObserver, FBProcessManagerObserver, FBWorkspaceDelegate, FBDisplayManagerObserver, SBSceneManagerDelegate>
{
    FBSceneManager *_sceneManager;
    NSMutableDictionary *_displayToSceneManagers;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
}

+ (id)mainDisplaySceneManager;
+ (id)sharedInstance;
- (id)_clientSettingsDiffInspector;
- (void)_destroySceneManagerIfNecessary:(id)arg1;
- (Class)_sceneManagerClassForDisplay:(id)arg1;
- (id)_sceneManagerForDisplay:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (void)_updateExternalDisplayScenesIfNecessaryForMainDisplayScene:(id)arg1 forTransitionToState:(unsigned long long)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)displayManager:(id)arg1 didConnectDisplay:(id)arg2;
- (void)displayManager:(id)arg1 didDisconnectDisplay:(id)arg2;
- (void)displayManager:(id)arg1 willConnectDisplay:(id)arg2;
- (id)init;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)sceneManager:(id)arg1 deviceOrientationChangedTo:(long long)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 scene:(id)arg2 willTransitionToState:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (id)sceneManagerForDisplay:(id)arg1;
- (void)workspace:(id)arg1 didReceiveCreateSceneRequestWithInitialClientSettings:(id)arg2 withCompletion:(id)arg3;
- (void)workspace:(id)arg1 didReceiveDestroySceneRequestForIdentifier:(id)arg2 withCompletion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
