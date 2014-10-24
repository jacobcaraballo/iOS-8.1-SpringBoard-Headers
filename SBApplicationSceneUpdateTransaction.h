/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "FBApplicationUpdateScenesTransaction.h"

@class FBSDisplay, FBSSceneClientSettings<UIApplicationSceneClientSettings>, NSString, SBApplication, SBDisplayLayout, UIApplicationSceneTransitionContext, UIMutableApplicationSceneSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction
{
    SBApplication *_app;
    FBSDisplay *_display;
    SBDisplayLayout *_layout;
    NSString *_sceneIdentifier;
    UIMutableApplicationSceneSettings *_settings;
    UIApplicationSceneTransitionContext *_transitionContext;
    FBSSceneClientSettings<UIApplicationSceneClientSettings> *_clientSettings;
    _Bool _suspendedActivation;
}

- (id)_customizedDescriptionProperties;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 display:(id)arg2 layout:(id)arg3;
@property(retain, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, retain, nonatomic) UIMutableApplicationSceneSettings *sceneSettings; // @synthesize sceneSettings=_settings;

@end
