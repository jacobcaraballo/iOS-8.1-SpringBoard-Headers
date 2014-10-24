/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIViewController.h"

@class NSTimer, SBLockScreenBatteryChargingView;

@interface SBLockScreenBatteryChargingViewController : UIViewController
{
    SBLockScreenBatteryChargingView *_chargingView;
    NSTimer *_visibilityTimer;
    _Bool _displayDetailedCharge;
    long long _chargePercentage;
    id <SBLockScreenBatteryChargingViewControllerDelegate> _delegate;
}

- (void)_batteryStatusChanged:(id)arg1;
- (void)_clearVisibilityTimer;
- (void)_visibilityTimerFired:(id)arg1;
- (_Bool)batteryVisible;
- (id)chargingView;
- (void)dealloc;
@property(nonatomic) id <SBLockScreenBatteryChargingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)prepareForDismissal;
- (void)showChargeLevelWithBatteryVisible:(_Bool)arg1;

@end

