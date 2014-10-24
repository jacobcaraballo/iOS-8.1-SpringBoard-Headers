/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

#import "SBControlCenterObserver-Protocol.h"

@class NSString, SBCCQuickLaunchSectionController, SBCCSettingsSectionController, SBControlCenterGrabberView, SBControlCenterSectionViewController, UIViewController;

@interface SBControlCenterContentView : UIView <SBControlCenterObserver>
{
    UIViewController *_viewController;
    SBControlCenterGrabberView *_grabberView;
    SBCCSettingsSectionController *_settingsSection;
    SBControlCenterSectionViewController *_brightnessSection;
    SBControlCenterSectionViewController *_mediaControlsSection;
    SBControlCenterSectionViewController *_airplaySection;
    SBCCQuickLaunchSectionController *_quickLaunchSection;
}

+ (double)defaultBreadthForOrientation:(long long)arg1;
- (void)_addSectionController:(id)arg1;
- (id)_allSections;
- (void)_iPad_layoutSubviewsInBounds:(struct CGRect)arg1 orientation:(long long)arg2;
- (void)_iPhone_layoutSubviewsInBounds:(struct CGRect)arg1 orientation:(long long)arg2;
- (void)_removeSectionController:(id)arg1;
@property(retain, nonatomic) SBControlCenterSectionViewController *airplaySection; // @synthesize airplaySection=_airplaySection;
@property(retain, nonatomic) SBControlCenterSectionViewController *brightnessSection; // @synthesize brightnessSection=_brightnessSection;
- (double)contentHeightForOrientation:(long long)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
@property(retain, nonatomic) SBControlCenterGrabberView *grabberView; // @synthesize grabberView=_grabberView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) SBControlCenterSectionViewController *mediaControlsSection; // @synthesize mediaControlsSection=_mediaControlsSection;
@property(retain, nonatomic) SBCCQuickLaunchSectionController *quickLaunchSection; // @synthesize quickLaunchSection=_quickLaunchSection;
@property(retain, nonatomic) SBCCSettingsSectionController *settingsSection; // @synthesize settingsSection=_settingsSection;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)updateEnabledSections;
- (void)updateSectionVisibility:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
