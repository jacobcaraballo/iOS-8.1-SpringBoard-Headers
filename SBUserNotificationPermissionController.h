/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBUserNotificationCapable-Protocol.h"

@class NSObject<OS_dispatch_queue>, NSString, SBApplication;

@interface SBUserNotificationPermissionController : NSObject <SBUserNotificationCapable>
{
    _Bool _queueSuspended;
    _Bool _showingAlert;
    _Bool _canPerformQueuedActions;
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_performQueue;
}

+ (id)controllerForApplication:(id)arg1;
+ (id)controllerForBundleIdentifier:(id)arg1;
+ (void)createCacheIfNecessary;
+ (void)evictControllerFromCache:(id)arg1;
@property(readonly, retain, nonatomic) SBApplication *application;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool canPerformQueuedActions; // @synthesize canPerformQueuedActions=_canPerformQueuedActions;
- (void)dealloc;
- (void)didDeactivateAlert:(id)arg1 reason:(int)arg2;
- (id)effectiveUserNotificationSettings;
- (void)enqueueAction:(id)arg1;
- (_Bool)haveRegisteredBefore;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)installedApplicationsChanged:(id)arg1;
@property(nonatomic, getter=isQueueSuspended) _Bool queueSuspended; // @synthesize queueSuspended=_queueSuspended;
@property(nonatomic, getter=isShowingAlert) _Bool showingAlert; // @synthesize showingAlert=_showingAlert;
- (void)noteBadgeSetLocally;
- (void)notePermissionAlertAccepted:(_Bool)arg1 withSettings:(id)arg2 makeAppDelegateCallback:(_Bool)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *performQueue; // @synthesize performQueue=_performQueue;
- (void)registerPrivilegedForAdditionalTypes:(unsigned long long)arg1;
- (void)registerSupportedNotificationTypes:(unsigned long long)arg1 withEnabledNotificationSettings:(id)arg2 makeAppDelegateCallback:(_Bool)arg3 bypassAlert:(_Bool)arg4;
- (void)registerUserNotificationSettings:(id)arg1 makeAppDelegateCallback:(_Bool)arg2;
- (void)saveRegisteredUserNotificationSettings:(id)arg1;
- (void)saveRegisteredUserNotificationSettings:(id)arg1 userDeniedNotifications:(_Bool)arg2;
- (void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(_Bool)arg2;
- (void)setBadge:(id)arg1;
- (void)setBadge:(id)arg1 onBehalfOfSystem:(_Bool)arg2;
- (void)setHaveRegisteredBefore:(_Bool)arg1;
- (id)settingsForRequestedSettings:(id)arg1 systemDesiredTypes:(unsigned long long)arg2;
- (void)tearDownQueue;
- (void)unregisterUserNotificationSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

