/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "BBObserverDelegate-Protocol.h"
#import "SBAssertionDelegate-Protocol.h"
#import "SBVolumePressBandit-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class BBObserver, CPDistributedNotificationCenter, NSArray, NSHashTable, NSMutableArray, NSMutableSet, NSString, NSTimer, SBAlertItem, SBAlertItemsSettings;

@interface SBAlertItemsController : NSObject <_UISettingsKeyObserver, SBVolumePressBandit, SBAssertionDelegate, BBObserverDelegate>
{
    NSMutableArray *_lockedAlertItems;
    NSMutableArray *_unlockedAlertItems;
    NSMutableArray *_pendingAlertItems;
    NSMutableArray *_superModalAlertItems;
    NSTimer *_autoDismissTimer;
    CPDistributedNotificationCenter *_notificationCenter;
    unsigned long long _notificationClientCount;
    _Bool _systemShuttingDown;
    _Bool _lockedButNotSetupYet;
    NSMutableSet *_forceAlertsToPendReasons;
    BBObserver *_bbObserver;
    NSHashTable *_observers;
    SBAlertItemsSettings *_settings;
    SBAlertItem *_testItem;
    NSMutableSet *_suppressionAssertions;
}

+ (id)sharedInstance;
- (void)_activateSuperModalAlertsIfNecessary;
- (void)_buddyDidExit;
- (void)_lockedButNotSetupYetChanged;
- (void)_notificationClientEnded:(id)arg1;
- (void)_notificationClientStarted:(id)arg1;
- (void)_notifyObservers:(id)arg1;
- (void)_postAlertPresentedNotificationForType:(int)arg1 sender:(id)arg2 date:(id)arg3;
- (void)activateAlertItem:(id)arg1;
- (void)activateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)activatePendedAlertsIfNecessary;
- (void)addObserver:(id)arg1;
- (id)alertItemsOfClass:(Class)arg1;
- (void)assertionExpired:(id)arg1;
- (void)autoDismissAlertItem:(id)arg1;
- (_Bool)canDeactivateAlertForMenuClickOrSystemGesture;
- (_Bool)captureSuppressionAssertionWithPort:(unsigned int)arg1 reason:(id)arg2;
- (void)convertUnlockedAlertsToLockedAlerts;
- (_Bool)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(_Bool)arg1;
- (void)deactivateAlertItem:(id)arg1;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(_Bool)arg3;
- (void)deactivateAlertItemsForFullscreenAlertActivationAndPendMiniAlerts:(_Bool)arg1;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(_Bool)arg3;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (_Bool)dontLockOverAlertItems;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (_Bool)hasAlertOfClass:(Class)arg1;
- (_Bool)hasAlerts;
- (_Bool)hasVisibleAlert;
- (_Bool)hasVisibleSuperModalAlert;
- (id)init;
@property(readonly, nonatomic) NSArray *lockedAlertItems; // @synthesize lockedAlertItems=_lockedAlertItems;
- (void)moveActiveAlertsToPendingWithAnimation:(_Bool)arg1;
- (void)noteSystemShuttingDown;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (void)notifySystemOfAlertItemActivation:(id)arg1;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)removeObserver:(id)arg1;
- (void)resetAutoDismissTimer;
- (void)setForceAlertsToPend:(_Bool)arg1 forReason:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)stopPendingAlertItemsForFullscreenAlert;
- (id)visibleAlertItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
