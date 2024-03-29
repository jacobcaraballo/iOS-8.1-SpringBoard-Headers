/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBAppSwitcherControllerDelegate-Protocol.h"
#import "SBUIActiveOrientationObserver-Protocol.h"
#import "SBWallpaperObserver-Protocol.h"
#import "UIWindowDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class FBUIApplicationResignActiveAssertion, FBWorkspaceEventQueueLock, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SBAnimationStepper, SBAppSwitcherController, SBAppSwitcherWindowController, SBApplication, SBDismissOnlyAlertItem, SBSwitchAppGestureView, SBWindow, UIStatusBar, UIView;

@interface SBUIController : NSObject <SBUIActiveOrientationObserver, SBAppSwitcherControllerDelegate, SBWallpaperObserver, _UISettingsKeyObserver, UIWindowDelegate>
{
    SBWindow *_window;
    UIView *_iconsView;
    UIView *_contentView;
    UIStatusBar *_fakeSpringBoardStatusBar;
    SBAppSwitcherController *_switcherController;
    SBAppSwitcherWindowController *_switcherWindowController;
    SBApplication *_toggleSwitcherAfterLaunchApp;
    FBUIApplicationResignActiveAssertion *_appSwitcherResignActiveAssertion;
    FBUIApplicationResignActiveAssertion *_systemGestureResignActiveAssertion;
    unsigned int _ignoringEvents:1;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    unsigned int _allowAlertWindowRotation:1;
    id _volumeHandler;
    float _batteryCapacity;
    _Bool _supportsDetailedBatteryCapacity;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    NSMutableDictionary *_installedSystemGestureViews;
    SBAnimationStepper *_suspendAnimationStepper;
    SBAnimationStepper *_statusBarAnimationStepper;
    SBAnimationStepper *_wallpaperAnimationStepper;
    id _suspendGestureCompleteForwardToEndHandler;
    id _suspendGestureCompleteBackwardToStartHandler;
    FBWorkspaceEventQueueLock *_suspendGestureWorkspaceLock;
    _Bool _shouldUnscatterForSuspendGesture;
    _Bool _switcherAnimationRevealing;
    _Bool _switcherAnimationInProgress;
    _Bool _switcherGestureRevealedOrDismissedSwitcher;
    SBSwitchAppGestureView *_switchAppGestureView;
    double _switchAppGesturePreviousPercentage;
    double _switchAppGestureEffectivePercentage;
    double _switchAppGestureInitialPercentage;
    unsigned long long _switchAppGestureChangedFrames;
    UIView *_pendingGestureLaunchView;
    SBApplication *_pendingAppActivatedByGesture;
    SBApplication *_appCurrentlyActivatingByGesture;
    NSMutableArray *_switchAppFullyOrderedList;
    NSArray *_switchAppFilteredList;
    _Bool _toggleSwitcherAfterLaunchAppUsesSystemGestureOrientation;
    double _ambiguousCCActivationMargin;
    NSMutableSet *_rotationPreventionReasons;
    _Bool _disableAnimationForNextIconRotation;
    _Bool _handlingHomePress;
}

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (void)ACPowerChanged;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (_Bool)_activateAppSwitcher;
- (_Bool)_allowSwitcherGesture;
- (void)_animateStatusBarForSuspendGesture;
- (id)_appSwitcherController;
- (double)_appSwitcherRevealAnimationDelay;
- (void)_applicationActivationStateDidChange:(id)arg1;
- (void)_awayControllerActivated:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (id)_calculateSwitchAppList;
- (_Bool)_canPresentCenterController:(id)arg1;
- (void)_clearAllInstalledSystemGestureViews;
- (void)_clearGestureViewVendorCacheForAppWithDisplayIdenitifier:(id)arg1;
- (void)_clearInstalledSystemGestureViewForKey:(id)arg1;
- (void)_clearPendingAppActivatedByGesture:(_Bool)arg1;
- (void)_clearSwitchAppList;
- (void)_closeOpenFolderIfNecessary;
- (double)_contentRotationForOrientation:(long long)arg1;
- (id)_currentFolderLegibilitySettings;
- (void)_deviceLockStateChanged:(id)arg1;
- (void)_dismissAppSwitcherImmediately;
- (int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
- (void)_dismissSwitcherAnimated:(_Bool)arg1;
- (id)_fakeSpringBoardStatusBar;
- (void)_getSwitchAppPrefetchApps:(id)arg1 initialApp:(id)arg2 outLeftwardAppIdentifier:(id *)arg3 outRightwardAppIdentifier:(id *)arg4;
- (_Bool)_handleButtonEventToSuspendDisplays:(_Bool)arg1 displayWasSuspendedOut:(_Bool *)arg2;
- (void)_hideControlCenterGrabber;
- (void)_hideKeyboard;
- (void)_hideNotificationCenterTabControl;
- (void)_hideNotificationsGestureBegan:(double)arg1;
- (void)_hideNotificationsGestureCancelled;
- (void)_hideNotificationsGestureChanged:(double)arg1;
- (void)_hideNotificationsGestureEndedWithCompletionType:(long long)arg1 velocity:(struct CGPoint)arg2;
- (void)_ignoreEvents;
- (_Bool)_ignoringEvents;
- (void)_indicateConnectedToPower;
- (void)_installSwitchAppGesturePlaceholderViewForEndingApp:(id)arg1;
- (void)_installSystemGestureView:(id)arg1 forKey:(id)arg2 forGesture:(unsigned long long)arg3;
- (id)_installedSystemGestureViewForKey:(id)arg1;
- (id)_legibilityPrototypeSettings;
- (id)_legibilitySettings;
- (void)_lockOrientationForSwitcher;
- (void)_lockOrientationForSystemGesture;
- (void)_lockOrientationForTransition;
- (id)_makeSwitchAppFilteredList:(id)arg1 initialApp:(id)arg2;
- (id)_makeSwitchAppValidList:(id)arg1;
- (void)_noteAppDidActivate:(id)arg1;
- (void)_noteAppDidFailToActivate:(id)arg1;
- (void)_noteMainSceneCreatedForApp:(id)arg1;
- (struct CGAffineTransform)_portraitViewTransformForSwitcherSize:(struct CGSize)arg1 orientation:(long long)arg2;
- (_Bool)_preventShowingTabControls;
- (void)_releaseSystemGestureOrientationLock;
- (void)_releaseTransitionOrientationLock;
- (void)_reloadSwitcherController;
- (void)_resumeEventsIfNecessary;
- (void)_returnToRemoteAlertFromSwitcher:(id)arg1;
- (void)_runAppSwitcherBringupTest;
- (void)_runAppSwitcherDismissTest;
- (void)_setHidden:(_Bool)arg1;
- (void)_setToggleSwitcherAfterLaunchApp:(id)arg1;
- (void)_showControlCenterGestureBeganWithLocation:(struct CGPoint)arg1;
- (void)_showControlCenterGestureCancelled;
- (void)_showControlCenterGestureChangedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 duration:(double)arg3;
- (void)_showControlCenterGestureEndedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_showControlCenterGestureFailed;
- (void)_showNotificationsGestureBeganWithLocation:(struct CGPoint)arg1;
- (void)_showNotificationsGestureCancelled;
- (void)_showNotificationsGestureChangedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_showNotificationsGestureEndedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_showNotificationsGestureFailed;
- (void)_suspendGestureBegan;
- (void)_suspendGestureCancelled;
- (void)_suspendGestureChanged:(float)arg1;
- (void)_suspendGestureCleanUpState;
- (void)_suspendGestureEndedWithCompletionType:(long long)arg1;
- (_Bool)_suspendGestureShouldFinish;
- (void)_switchAppGestureBegan:(double)arg1;
- (void)_switchAppGestureCancelled;
- (void)_switchAppGestureChanged:(double)arg1;
- (void)_switchAppGestureEndedWithCompletionType:(long long)arg1 cumulativePercentage:(double)arg2;
- (void)_switchAppGestureViewAnimationComplete;
- (void)_switchToHomeScreenWallpaperAnimated:(_Bool)arg1;
- (void)_switcherFixupIconsViewIfNecessary;
- (void)_switcherGestureBegan;
- (void)_switcherGestureCancelled;
- (void)_switcherGestureChanged:(float)arg1;
- (void)_switcherGestureEndedWithCompletionType:(long long)arg1 cumulativePercentage:(double)arg2;
- (_Bool)_switcherGestureIsBlockedByAppLaunchOrIgnoringEvents;
- (void)_switcherWantsToActivateDisplayLayout:(id)arg1 displayIDsToURLs:(id)arg2 displayIDsToActions:(id)arg3;
- (id)_systemGestureViewKeyForApp:(id)arg1;
- (void)_toggleSwitcher;
- (id)_toggleSwitcherAfterLaunchApp;
- (void)_toggleSwitcherForReals;
- (void)_updateLegibility;
- (void)activateApplicationAnimated:(id)arg1;
- (void)activateApplicationAnimatedFromIcon:(id)arg1 fromLocation:(int)arg2;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (_Bool)allowAlertWindowRotation;
- (_Bool)allowSystemGestureType:(unsigned long long)arg1 atLocation:(struct CGPoint)arg2;
- (double)ambiguousControlCenterActivationMargin;
- (void)animateAppSwitcherDismissalToDisplayLayout:(id)arg1 withCompletion:(id)arg2;
- (void)animateAppleDown:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationStepperFinishBackwardToStartCompleted:(id)arg1;
- (void)appSwitcher:(id)arg1 wantsToActivateDisplayLayout:(id)arg2 displayIDsToURLs:(id)arg3 displayIDsToActions:(id)arg4;
- (void)appSwitcherNeedsToReload:(id)arg1;
- (void)appSwitcherWantsToDismissImmediately:(id)arg1;
- (float)batteryCapacity;
- (int)batteryCapacityAsPercentage;
- (void)cancelVolumeEvent;
- (void)cleanUpOnFrontLocked;
- (void)cleanupRunningGestureIfNeeded;
- (void)cleanupSwitchAppGestureViews;
- (void)clearPendingAppActivatedByGesture;
- (_Bool)clickedMenuButton;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (id)contentView;
- (void)dealloc;
- (void)disableAnimationForNextIconRotation;
- (void)dismissSwitcherAnimated:(_Bool)arg1;
- (void)dismissSwitcherForAlert:(id)arg1;
- (int)displayBatteryCapacityAsPercentage;
- (void)endRequiringWallpaperForSuspendGestureIfNecessary;
- (id)fakeStatusBarStyleRequestForStyle:(long long)arg1;
- (void)finishLaunching;
- (void)forceIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)getRidOfAppSwitcher;
- (void)getRotationContentSettings:(CDStruct_e950349b *)arg1 forWindow:(id)arg2;
- (void)handleDismissBannerSystemGesture:(id)arg1;
- (void)handleFluidHorizontalSystemGesture:(id)arg1;
- (void)handleFluidScaleSystemGesture:(id)arg1;
- (void)handleFluidVerticalSystemGesture:(id)arg1;
- (void)handleHideNotificationsSystemGesture:(id)arg1;
- (_Bool)handleMenuDoubleTap;
- (void)handleShowControlCenterSystemGesture:(id)arg1;
- (void)handleShowNotificationsSystemGesture:(id)arg1;
- (void)handleVolumeEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)hasPendingAppActivatedByGesture;
- (unsigned char)headsetBatteryCapacity;
- (void)hideSystemGestureBackdrop;
- (id)init;
- (_Bool)isAppSwitcherShowing;
- (_Bool)isBatteryCharging;
- (_Bool)isConnectedToChargeIncapablePowerSource;
- (_Bool)isConnectedToUnsupportedChargingAccessory;
- (_Bool)isFakeStatusBarStyleEffectivelyDoubleHeight:(long long)arg1;
- (_Bool)isHandlingHomeButtonPress;
- (_Bool)isHeadsetBatteryCharging;
- (_Bool)isHeadsetDocked;
- (_Bool)isOnAC;
- (void)launchApplicationByGesture:(id)arg1;
- (void)launchIcon:(id)arg1 fromLocation:(int)arg2;
- (void)launchPendingAppActivatedByGestureIfExists;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (void)openNewsstand;
- (void)prefetchAdjacentAppsAndEvictRemotes:(id)arg1;
- (void)programmaticSwitchAppGestureApplyWithPercentage:(double)arg1;
- (void)programmaticSwitchAppGestureMoveToLeft;
- (void)programmaticSwitchAppGestureMoveToRight;
- (_Bool)promptUnlockForAppActivation:(id)arg1 withCompletion:(id)arg2;
- (void)releaseSwitcherOrientationLock;
- (void)removeAppFromSwitchAppList:(id)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (void)requestApplicationEventsEnabledIfNecessary;
- (void)restoreContent;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1;
- (void)restoreContentAndUnscatterIconsAnimated:(_Bool)arg1 withCompletion:(id)arg2;
- (void)restoreContentUpdatingStatusBar:(_Bool)arg1;
- (id)rotatingContentViewForWindow:(id)arg1;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (void)scheduleApplicationForLaunchByGesture:(id)arg1;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
- (void)setAllowSwitcherRotation:(_Bool)arg1 forReason:(id)arg2;
- (void)setAmbiguousControlCenterActivationMargin:(double)arg1 forApp:(id)arg2;
- (void)setFakeSpringBoardStatusBarVisible:(_Bool)arg1;
- (void)setIsConnectedToUnsupportedChargingAccessory:(_Bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)shouldSendTouchesToSystemGestures;
- (_Bool)shouldShowControlCenterTabControlOnFirstSwipe;
- (_Bool)shouldShowNotificationCenterTabControlOnFirstSwipe;
- (_Bool)shouldUseControlCenterRevealConfirmation;
- (_Bool)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (double)showNotificationsTabControlSwipableWidth;
- (void)showSystemGestureBackdrop;
- (void)stopRestoringIconList;
- (_Bool)supportsDetailedBatteryCapacity;
- (id)switcherController;
- (id)switcherWindow;
- (void)systemControllerRouteChanged:(id)arg1;
- (id)systemGestureSnapshotForApp:(id)arg1 includeStatusBar:(_Bool)arg2 decodeImage:(_Bool)arg3;
- (id)systemGestureSnapshotWithIOSurfaceSnapshotOfApp:(id)arg1 includeStatusBar:(_Bool)arg2;
- (void)tearDownIconListAndBar;
- (void)updateBatteryState:(id)arg1;
- (void)updateShouldShowCenterTabControlsOnFirstSwipe;
- (void)updateStatusBarLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)window;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (_Bool)workspaceShouldAbortLaunchingAppDueToSwitcher:(id)arg1 url:(id)arg2 actions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

