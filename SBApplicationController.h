/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "FBUIApplicationServiceDelegate-Protocol.h"
#import "SBApplicationLifecycleObserver-Protocol.h"
#import "SBApplicationRestrictionDataSource-Protocol.h"

@class BKSApplicationStateMonitor, FBApplicationInfo, FBApplicationLibrary, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSString, SBApplicationLibraryObserver, SBApplicationRestrictionController, SBReverseCountedSemaphore;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, SBApplicationLifecycleObserver, FBUIApplicationServiceDelegate>
{
    NSMutableDictionary *_applicationsByBundleIdentifer;
    NSMutableSet *_applicationsPlayingMutedAudioSinceLastLock;
    NSDictionary *_backgroundDisplayDict;
    NSLock *_applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    _Bool _visibilityOverridesAreDirty;
    BKSApplicationStateMonitor *_appStateMonitor;
    _Bool _booting;
    NSMutableSet *_appsToAutoLaunchAfterBoot;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBApplicationLibrary *_appLibrary;
    FBApplicationInfo *_systemAppInfo;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
}

+ (void)_setClearSystemAppSnapshotsWhenLoaded:(_Bool)arg1;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)_appInfosToBundleIDs:(id)arg1;
- (Class)_applicationClassForInfoDictionary:(id)arg1;
- (void)_autoLaunchAppsIfNecessaryAfterBoot;
- (void)_deviceFirstUnlocked;
- (void)_finishDeferredMajorVersionMigrationTasks;
- (void)_loadApplicationFromApplicationInfo:(id)arg1;
- (void)_loadApplicationFromInfo:(id)arg1 withBundle:(id)arg2;
- (_Bool)_loadApplicationWithoutMutatingIconState:(id)arg1;
- (id)_loadApplications:(id)arg1 removed:(id)arg2;
- (void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 reveal:(_Bool)arg3;
- (void)_lockStateChanged:(id)arg1;
- (id)_lock_applicationWithBundleIdentifier:(id)arg1;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_memoryWarningReceived;
- (void)_preLoadApplications;
- (void)_registerForAVSystemControllerNotifications;
- (void)_reloadBackgroundIDsDict;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_setVisibilityOverridesAreDirty:(_Bool)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_unusuallyMutedAudioPlaying:(id)arg1;
- (void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(_Bool)arg2 popIn:(_Bool)arg3 reloadAllIcons:(_Bool)arg4;
- (id)allApplications;
- (id)allBundleIdentifiers;
- (int)appVisibilityOverrideForBundleIdentifier:(id)arg1;
- (void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(id)arg3;
- (void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationService:(id)arg1 setNextWakeDate:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationWithPid:(int)arg1;
- (void)applicationsAdded:(id)arg1;
- (void)applicationsModified:(id)arg1;
- (void)applicationsRemoved:(id)arg1;
- (id)cameraApplication;
- (id)clockApplication;
- (id)dataActivation;
- (void)dealloc;
- (id)faceTimeApp;
- (id)iPodOutApplication;
- (id)init;
- (id)mobilePhone;
- (id)musicApplication;
- (id)newsstandApps;
- (id)restrictionController;
- (id)setupApplication;
- (void)uninstallApplication:(id)arg1;
- (_Bool)updateAppIconVisibilityOverridesShowing:(id *)arg1 hiding:(id *)arg2;
- (void)waitForUninstallsToComplete;
- (id)webApplications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
