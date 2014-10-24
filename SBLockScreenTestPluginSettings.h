/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "_UISettings.h"

@interface SBLockScreenTestPluginSettings : _UISettings
{
    _Bool _enablePlugin;
    _Bool _enableLostModePlugin;
    _Bool _showDateView;
    _Bool _showDate;
    _Bool _disableOnUnlock;
    _Bool _showCamera;
    _Bool _showBackgroundView;
    unsigned long long _overlayStyle;
    unsigned long long _notificationBehavior;
}

+ (id)settingsControllerModule;
@property _Bool disableOnUnlock; // @synthesize disableOnUnlock=_disableOnUnlock;
@property _Bool enableLostModePlugin; // @synthesize enableLostModePlugin=_enableLostModePlugin;
@property _Bool enablePlugin; // @synthesize enablePlugin=_enablePlugin;
@property unsigned long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property unsigned long long overlayStyle; // @synthesize overlayStyle=_overlayStyle;
- (void)setDefaultValues;
@property _Bool showBackgroundView; // @synthesize showBackgroundView=_showBackgroundView;
@property _Bool showCamera; // @synthesize showCamera=_showCamera;
@property _Bool showDate; // @synthesize showDate=_showDate;
@property _Bool showDateView; // @synthesize showDateView=_showDateView;

@end

