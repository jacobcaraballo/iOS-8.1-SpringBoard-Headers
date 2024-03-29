/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBLockOverlayViewController.h"

#import "SBLockScreenBuddyViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SBActivationInfoViewController, SBLockScreenViewController;

@interface SBLockScreenBuddyViewController : SBLockOverlayViewController <SBLockScreenBuddyViewDelegate>
{
    NSMutableArray *_currentStringsOrdering;
    _Bool _needsTransitionFromFakeLogoToWelcomeStrings;
    _Bool _cyclingLabels;
    _Bool _viewVisible;
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    _Bool _showingBootLogo;
    _Bool _startsWithBlackBackground;
    _Bool _hasResultsFromWifiScan;
    _Bool _shouldResetOrderingOnNextCycle;
    SBLockScreenViewController *_lockScreenViewController;
    NSDictionary *_localizedStrings;
    NSArray *_stringsOrdering;
    unsigned long long _currentStringIndex;
    NSTimer *_stringCycleTimer;
    SBActivationInfoViewController *_activationInfoViewController;
    NSString *_telephonyPrimaryLanguage;
    NSString *_wifiPrimaryLanguage;
}

- (void)_closeWifiConnection;
- (id)_currentLanguageIdentifier;
- (id)_currentStringsDictionary;
- (void)_cycleTimerDidFire:(id)arg1;
- (void)_didHideBootSetupLogo:(id)arg1;
- (void)_didShowBootSetupLogo:(id)arg1;
- (void)_fetchLanguageFromTelephony;
- (id)_importantLanguageIdentifiers;
- (void)_noteLogoVisible:(_Bool)arg1;
- (void)_removeAllHiddenReasons;
- (void)_resetDisplayedLocalizedStringsImmediately:(_Bool)arg1;
- (void)_startCyclingLocalizedStrings;
- (void)_startCyclingLocalizedStringsWithDelay:(double)arg1;
- (void)_startWifiScan;
- (void)_toggleShowsIMEIandICCID:(id)arg1;
- (void)_transitionFromFakeBootLogoToWelcomeStrings;
- (void)_updateDisplayedStrings;
- (void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)arg1;
- (void)_wifiScanComplete:(struct __CFArray *)arg1 error:(_Bool)arg2;
@property(retain, nonatomic) SBActivationInfoViewController *activationInfoViewController; // @synthesize activationInfoViewController=_activationInfoViewController;
- (id)buddyView;
- (void)buddyView:(id)arg1 didChangeToStyle:(unsigned long long)arg2;
@property(nonatomic) unsigned long long currentStringIndex; // @synthesize currentStringIndex=_currentStringIndex;
- (void)dealloc;
- (void)handleTapGestureFromView:(id)arg1;
@property(nonatomic) _Bool hasResultsFromWifiScan; // @synthesize hasResultsFromWifiScan=_hasResultsFromWifiScan;
- (id)initWithLockScreenViewController:(id)arg1;
@property(nonatomic, getter=isShowingBootLogo) _Bool showingBootLogo; // @synthesize showingBootLogo=_showingBootLogo;
- (void)loadView;
@property(copy, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(nonatomic) SBLockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void)setInScreenOffMode:(_Bool)arg1;
@property(nonatomic) _Bool shouldResetOrderingOnNextCycle; // @synthesize shouldResetOrderingOnNextCycle=_shouldResetOrderingOnNextCycle;
@property(nonatomic) _Bool startsWithBlackBackground; // @synthesize startsWithBlackBackground=_startsWithBlackBackground;
@property(retain, nonatomic) NSTimer *stringCycleTimer; // @synthesize stringCycleTimer=_stringCycleTimer;
@property(copy, nonatomic) NSArray *stringsOrdering; // @synthesize stringsOrdering=_stringsOrdering;
@property(copy, nonatomic) NSString *telephonyPrimaryLanguage; // @synthesize telephonyPrimaryLanguage=_telephonyPrimaryLanguage;
@property(copy, nonatomic) NSString *wifiPrimaryLanguage; // @synthesize wifiPrimaryLanguage=_wifiPrimaryLanguage;
@property(readonly, nonatomic) NSString *slideToUnlockText;
- (void)stopCyclingLocalizedStrings;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

