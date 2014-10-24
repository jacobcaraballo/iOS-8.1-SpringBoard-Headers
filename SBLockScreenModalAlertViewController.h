/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIViewController.h"

@class NSArray, NSMutableArray, SBAlertItem, SBUIBiometricEventMonitor;

@interface SBLockScreenModalAlertViewController : UIViewController
{
    NSMutableArray *_pendingAlertItems;
    NSMutableArray *_pendingSuperModalAlertItems;
    NSMutableArray *_presentedAlertItems;
    SBAlertItem *_currentAlertItem;
    SBUIBiometricEventMonitor *_bioEventMonitor;
}

- (void)_addPresentedAlertItem:(id)arg1;
- (void)_pendAlertItem:(id)arg1;
- (void)_pendOrDeactivateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)_removePresentedAlertItem:(id)arg1;
- (_Bool)activateAlertItem:(id)arg1 pended:(_Bool)arg2 animated:(_Bool)arg3;
- (id)allPendingAlertItems;
@property(readonly, nonatomic) SBAlertItem *currentAlertItem; // @synthesize currentAlertItem=_currentAlertItem;
- (void)deactivateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)dequeueAllPendingAlertItems;
- (id)dequeueAllPendingSuperModalAlertItems;
- (_Bool)hasSuperModalAlertItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pendOrDeactivateCurrentAlertItem;
@property(readonly, nonatomic) NSArray *presentedAlertItems; // @synthesize presentedAlertItems=_presentedAlertItems;

@end
