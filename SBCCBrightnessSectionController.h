/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBControlCenterSectionViewController.h"

@class SBUIControlCenterSlider, UIView, UIVisualEffectView;

@interface SBCCBrightnessSectionController : SBControlCenterSectionViewController
{
    SBUIControlCenterSlider *_slider;
    UIVisualEffectView *_vibrantDarkenLayer;
    UIView *_tintingDarkenLayer;
    struct BKSDisplayBrightnessTransaction *_brightnessTransaction;
}

- (float)_backlightLevel;
- (void)_noteScreenBrightnessDidChange:(id)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (_Bool)_shouldDarkenBackground;
- (void)_sliderDidBeginTracking:(id)arg1;
- (void)_sliderDidEndTracking:(id)arg1;
- (void)_sliderValueDidChange:(id)arg1;
- (void)_updateEffects;
- (double)_yOffsetFromCenterForSlider;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (void)dealloc;
- (void)noteSettingsDidUpdate:(id)arg1;
- (id)sectionIdentifier;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end
