/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "_UISettings.h"

@class SBControlCenterSettingsSectionSettings, SBControlCenterShortcutSectionSettings, UIColor;

@interface SBControlCenterSettings : _UISettings
{
    _Bool _highlightUsesPlusL;
    _Bool _forceVibrantControls;
    _Bool _useNewBounce;
    SBControlCenterSettingsSectionSettings *_settingsSectionSettings;
    SBControlCenterShortcutSectionSettings *_shortcutSectionSettings;
    double _controlAlpha;
    double _controlAlpha1x;
    double _minControlAlpha;
    double _maxControlAlpha;
    double _disabledAlpha;
    double _disabledAlpha1x;
    double _highlightAlpha;
    double _glowAlpha;
    UIColor *_highlightColor;
    double _oldBounceFriction;
    double _bounceDensityFactor;
    double _bounceResistance;
    double _minVelocity;
    double _maxVelocity;
    double _attachmentThreshold;
    double _attachmentFrequencyAbove;
    double _attachmentFrequencyBelow;
    double _attachmentVelocityDamping;
    double _attachmentMinDamping;
    double _attachmentMaxDamping;
    double _backgroundAlphaFactor;
}

+ (id)settingsControllerModule;
@property double attachmentFrequencyAbove; // @synthesize attachmentFrequencyAbove=_attachmentFrequencyAbove;
@property double attachmentFrequencyBelow; // @synthesize attachmentFrequencyBelow=_attachmentFrequencyBelow;
@property double attachmentMaxDamping; // @synthesize attachmentMaxDamping=_attachmentMaxDamping;
@property double attachmentMinDamping; // @synthesize attachmentMinDamping=_attachmentMinDamping;
@property double attachmentThreshold; // @synthesize attachmentThreshold=_attachmentThreshold;
@property double attachmentVelocityDamping; // @synthesize attachmentVelocityDamping=_attachmentVelocityDamping;
@property double backgroundAlphaFactor; // @synthesize backgroundAlphaFactor=_backgroundAlphaFactor;
@property double bounceDensityFactor; // @synthesize bounceDensityFactor=_bounceDensityFactor;
@property double bounceResistance; // @synthesize bounceResistance=_bounceResistance;
@property double controlAlpha; // @synthesize controlAlpha=_controlAlpha;
@property double controlAlpha1x; // @synthesize controlAlpha1x=_controlAlpha1x;
@property double disabledAlpha; // @synthesize disabledAlpha=_disabledAlpha;
@property double disabledAlpha1x; // @synthesize disabledAlpha1x=_disabledAlpha1x;
@property _Bool forceVibrantControls; // @synthesize forceVibrantControls=_forceVibrantControls;
@property double glowAlpha; // @synthesize glowAlpha=_glowAlpha;
@property double highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
@property(retain) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property _Bool highlightUsesPlusL; // @synthesize highlightUsesPlusL=_highlightUsesPlusL;
@property double maxControlAlpha; // @synthesize maxControlAlpha=_maxControlAlpha;
@property double maxVelocity; // @synthesize maxVelocity=_maxVelocity;
@property double minControlAlpha; // @synthesize minControlAlpha=_minControlAlpha;
@property double minVelocity; // @synthesize minVelocity=_minVelocity;
@property double oldBounceFriction; // @synthesize oldBounceFriction=_oldBounceFriction;
- (double)resolvedControlAlpha;
- (double)resolvedDisabledAlpha;
- (void)setDefaultValues;
@property(retain) SBControlCenterSettingsSectionSettings *settingsSectionSettings; // @synthesize settingsSectionSettings=_settingsSectionSettings;
@property(retain) SBControlCenterShortcutSectionSettings *shortcutSectionSettings; // @synthesize shortcutSectionSettings=_shortcutSectionSettings;
@property _Bool useNewBounce; // @synthesize useNewBounce=_useNewBounce;

@end

