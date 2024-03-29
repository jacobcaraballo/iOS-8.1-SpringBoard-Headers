/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "_UISettingsKeyObserver-Protocol.h"

@class NSMutableDictionary, NSString, SBLockScreenPlugin, SBLockScreenPluginLoader, SBLockScreenPluginTransitionFactory, SBLockScreenTestPluginSettings, SBLockScreenViewController, UIWindow;

@interface SBLockScreenPluginController : NSObject <_UISettingsKeyObserver>
{
    SBLockScreenPluginLoader *_pluginLoader;
    NSMutableDictionary *_plugins;
    SBLockScreenPlugin *_activePlugin;
    SBLockScreenPlugin *_displayedPlugin;
    SBLockScreenPluginTransitionFactory *_transitionFactory;
    id <SBLockScreenPluginControllerDelegate> _delegate;
    SBLockScreenViewController *_lockScreenViewController;
    _Bool _pluginControllerReceivedViewWillDisappear;
    _Bool _pluginControllerReceivedViewDidDisappear;
    UIWindow *_previousWindow;
    _Bool _removedDisplayedPluginTemporarily;
    SBLockScreenTestPluginSettings *_testSettings;
    _Bool _lockScreenHasNotifications;
    _Bool _allowDisplayOfPlugins;
    double _fadeDuration;
}

- (void)_addObservers;
- (void)_disablePluginsPassingTest:(id)arg1 withReason:(void)arg2;
- (void)_handleApplicationExit:(id)arg1;
- (void)_handlePluginDisable:(id)arg1;
- (void)_handleUIRelock;
- (void)_handleUpdatePluginLegibilitySettings:(id)arg1;
- (id)_highestPriorityPluginIgnoringViewDisplay:(_Bool)arg1;
- (_Bool)_loadLockScreenPluginWithName:(id)arg1 activationContext:(id)arg2;
- (void)_lockScreenDidMoveToWindow;
- (id)_lockScreenView;
- (void)_lockScreenWillMoveToWindow;
- (void)_notifyDisplayedPluginAddedToWindow;
- (void)_notifyDisplayedPluginRemovedFromWindow;
- (void)_passcodeLockedStateChanged:(id)arg1;
- (id)_pluginForName:(id)arg1 controller:(id)arg2;
- (_Bool)_pluginHidesNotificationList:(id)arg1;
- (id)_pluginView;
- (void)_refreshLockScreenPlugin;
- (void)_removeActivePlugin;
- (void)_removeDisplayedPluginPermanently:(_Bool)arg1;
- (void)_setActivePlugin:(id)arg1;
- (void)_setDisplayedPlugin:(id)arg1;
- (void)_setEffectivePresentationStyleForDisplayedPluginIfNecessary;
- (id)_transitionContextWithOldPlugin:(id)arg1 newPlugin:(id)arg2;
- (void)_transitionFromExclusionaryPluginToNotificationList;
- (void)_transitionFromNotificationListToExclusionaryPlugin;
- (void)_updateCallPluginPresentationStyle;
- (void)_updateNotificationListForNewlyActivatedPlugin;
- (id)activePlugin;
- (id)activePluginBundleName;
- (_Bool)activePluginHidesNotificationList;
@property(nonatomic) _Bool allowDisplayOfPlugins; // @synthesize allowDisplayOfPlugins=_allowDisplayOfPlugins;
- (void)dealloc;
- (struct CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(long long)arg2;
@property(nonatomic) id <SBLockScreenPluginControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2;
- (id)displayedPlugin;
- (_Bool)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2;
@property double fadeDuration; // @synthesize fadeDuration=_fadeDuration;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleLockButtonPressed;
- (void)handleLockScreenTemporarilyDismissed;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)handleMenuButtonHeld;
- (_Bool)handleMenuButtonTap;
- (void)handleUIUnlock;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (id)initWithLockScreenViewController:(id)arg1;
- (_Bool)isPhonePluginActive;
- (_Bool)isPhonePluginVisible;
- (_Bool)isPluginVisible;
@property(nonatomic) _Bool lockScreenHasNotifications; // @synthesize lockScreenHasNotifications=_lockScreenHasNotifications;
@property(nonatomic) SBLockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (_Bool)pluginControllerShouldAnimateOthersResumption;
@property(retain, nonatomic) SBLockScreenPluginLoader *pluginLoader; // @synthesize pluginLoader=_pluginLoader;
- (void)reset;
- (_Bool)sendEventToPlugin:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)wantsMenuButtonHeldEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

