/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "AVExternalDeviceDelegate-Protocol.h"
#import "FBWindowContextManagerDelegate-Protocol.h"
#import "FBWindowContextManagerObserver-Protocol.h"
#import "SBAlertManagerDelegate-Protocol.h"
#import "SBAlertManagerObserver-Protocol.h"
#import "SBAlertObserver-Protocol.h"
#import "UIStatusBarStyleDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class AVExternalDevice, FBSDisplay, FBScene, NSHashTable, NSMapTable, NSMutableOrderedSet, NSString, SBAlertManager, SBAssistantWindow, SBCarDisplaySettings, SBStarkAnimationWindow, SBStarkFakeIconOperationController, SBStarkIconController, SBStarkIconWindow, SBStarkLockOutViewController, SBStarkLockOutWindow, SBStarkNotificationViewController, SBStarkNotificationWindow, SBStarkNowPlayingController, SBStarkNowPlayingWindow, SBStarkScreenFocusController, SBStarkStatusBarViewController, SBStarkStatusBarWindow, SBWindow, UIScreen, UIWindow;

@interface SBStarkScreenController : NSObject <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate, FBWindowContextManagerDelegate, FBWindowContextManagerObserver>
{
    FBSDisplay *_fbsDisplay;
    UIScreen *_screen;
    unsigned long long _interactionAffordances;
    long long _layoutJustification;
    SBCarDisplaySettings *_settings;
    id <SBStarkScreenControllerDelegate> _delegate;
    id <SBDisplayProtocol> _actualTopDisplay;
    id <SBDisplayProtocol> _effectiveTopDisplay;
    NSMutableOrderedSet *_alertSheets;
    NSMapTable *_alertSheetsToWindowMap;
    NSHashTable *_observers;
    long long _screenState;
    long long _lockOutMode;
    _Bool _delayUpdatingLockOutMode;
    SBStarkLockOutViewController *_lockOutViewController;
    SBStarkLockOutWindow *_lockOutWindow;
    SBStarkAnimationWindow *_animationWindow;
    FBScene *_nowPlayingScene;
    SBStarkNowPlayingController *_nowPlayingController;
    SBStarkNowPlayingWindow *_nowPlayingWindow;
    _Bool _showingNowPlaying;
    SBStarkIconController *_iconController;
    SBStarkIconWindow *_iconWindow;
    SBStarkStatusBarViewController *_statusBarViewController;
    SBStarkStatusBarWindow *_statusBarWindow;
    SBStarkNotificationWindow *_notificationWindow;
    SBAssistantWindow *_siriWindow;
    long long _siriState;
    SBAlertManager *_alertManager;
    id _alertBorrowScreenToken;
    id _siriBorrowScreenToken;
    SBStarkScreenFocusController *_focusController;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
    AVExternalDevice *_externalDevice;
    _Bool _externalDeviceScreenAvailable;
    SBWindow *_mainWindow;
}

+ (void)_launchNowPlaying;
- (void)_alertSheetDismissed:(id)arg1;
- (void)_alertSheetPresented:(id)arg1;
- (_Bool)_allowInCallOverrideStyle;
- (_Bool)_allowNavigationOverrideStyle;
- (void)_createFakeIconOperationController;
- (struct CGRect)_defaultScreenFrameOffsetForStatusBar:(id)arg1;
- (void)_didChangeFromState:(long long)arg1;
- (void)_dismissSiriWithFactory:(id)arg1 animations:(id)arg2 completion:(void)arg3;
- (void)_externalDeviceScreenBecameAvailable:(id)arg1;
- (void)_externalDeviceScreenBecameUnavailable:(id)arg1;
- (void)_handleMenuEventAndTakeScreen:(_Bool)arg1;
- (void)_hideWindowsForSetup:(_Bool)arg1;
- (id)_newNowPlayingScene;
- (void)_noteInitializationCompleted;
- (void)_noteSetupCompleted;
- (void)_setSiriState:(long long)arg1;
- (void)_takeScreenIfNecessaryForTopDisplayActivation;
- (void)_tearDownAndInvalidate:(_Bool)arg1;
- (void)_toggleNotificationSuspendedState;
- (void)_toggleNowPlayingVisible:(_Bool)arg1;
- (void)_updateAlertSheetFocus;
- (void)_updateLockOutMode;
- (void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)alertBannerSuppressionChanged:(id)arg1;
@property(readonly, retain, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
- (void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
- (_Bool)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2;
@property(readonly, retain, nonatomic) SBWindow *animationWindow;
- (void)cleanupForTopDisplayIfNecessaryWithAnimationFactory:(id)arg1;
- (void)dealloc;
@property(nonatomic) id <SBStarkScreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSiriWithAnimation:(long long)arg1 factory:(id)arg2 completion:(id)arg3;
@property(retain, nonatomic) id <SBDisplayProtocol> effectiveTopDisplay;
@property(readonly, retain, nonatomic) FBSDisplay *fbsDisplay; // @synthesize fbsDisplay=_fbsDisplay;
@property(readonly, retain, nonatomic) UIWindow *focusWindow;
- (void)handleACHomeUp;
- (void)handleLongBackPress;
- (void)handleUncompletedAppLaunch;
- (void)handleUnhandledBack;
- (void)iOSUIRequestedForApplicationURL:(id)arg1;
@property(readonly, retain, nonatomic) SBStarkIconController *iconController;
@property(readonly, retain, nonatomic) SBWindow *iconWindow;
- (id)init;
- (id)initWithScreen:(id)arg1;
@property(readonly, nonatomic) unsigned long long interactionAffordances; // @synthesize interactionAffordances=_interactionAffordances;
- (void)invalidate;
- (_Bool)isShowingNowPlaying;
@property(readonly, nonatomic) long long layoutJustification; // @synthesize layoutJustification=_layoutJustification;
@property(readonly, retain, nonatomic) SBWindow *lockoutWindow;
@property(readonly, retain, nonatomic) SBWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(readonly, retain, nonatomic) SBStarkNotificationViewController *notificationController;
- (void)notifyWhenNowPlayingIsActive:(id)arg1 withTimeout:(void)arg2;
- (id)nowPlayingContextHostManager;
- (id)nowPlayingSnapshot;
- (_Bool)presentSiri:(_Bool)arg1 viewController:(id)arg2;
- (void)removeObserver:(id)arg1;
- (struct CGRect)sceneFrameForAlerts:(id)arg1;
- (double)sceneLevelForAlerts;
@property(readonly, retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void)setEffectiveTopDisplay:(id)arg1 actualTopDisplay:(id)arg2 withAnimationFactory:(id)arg3;
- (void)setEffectiveTopDisplay:(id)arg1 withAnimationFactory:(id)arg2;
- (void)setNowPlayingBundleID:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)siriRequestedWithAction:(long long)arg1;
@property(readonly, nonatomic) long long state;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
@property(readonly, retain, nonatomic) SBStarkStatusBarViewController *statusBarController;
- (void)updateStatusBarStateForDisplay:(id)arg1 withAnimationFactory:(id)arg2;
- (_Bool)windowContextManager:(id)arg1 shouldAddContext:(id)arg2;
- (void)windowContextManagerDidStopTrackingContexts:(id)arg1;
- (void)windowContextManagerWillStartTrackingContexts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

