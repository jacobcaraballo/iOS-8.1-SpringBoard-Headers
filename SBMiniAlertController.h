/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class SBApplication, UIView;

@interface SBMiniAlertController : NSObject
{
    SBApplication *_displayShowingAnAlert;
    unsigned int _sbMiniAlertVisible:1;
    UIView *_hiddenAlertWindow;
}

+ (id)sharedInstance;
- (void)_hideMiniAlertsForApp:(id)arg1;
- (void)_setAlertVisibleNotifyState:(_Bool)arg1;
- (void)_setDisplayShowingAnAlert:(id)arg1;
- (_Bool)canShowAlerts;
- (void)deactivateAlertItemsForDisplay:(id)arg1;
- (void)dealloc;
- (void)displayDidDismissMiniAlert:(id)arg1;
- (id)displayShowingAnAlert;
- (void)displayWillDismissMiniAlert:(id)arg1;
- (void)displayWillShowMiniAlert:(id)arg1;
- (void)hideApplicationMiniAlerts;
- (id)init;
- (_Bool)miniAlertVisible;
- (void)noteMiniAlertStateChanged;
- (void)showApplicationMiniAlertsIfNeeded;

@end

