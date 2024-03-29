/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@class SBAttributionWrapperViewController, SBNewWidgetsLabel, SBNotificationSeparatorView, SBNotificationVibrantButton, UIControl;

@interface SBTodayTableFooterView : UIView
{
    SBNewWidgetsLabel *_newWidgetsLabel;
    SBNotificationVibrantButton *_button;
    SBNotificationSeparatorView *_separatorView;
    SBAttributionWrapperViewController *_attributionViewController;
    long long _layoutMode;
}

- (double)_attributionOriginY;
- (void)_availableWidgetsUpdated:(id)arg1;
- (double)_buttonBottomPadding;
- (_Bool)_isDevicePasscodeLocked;
- (void)_updateAttributionFrame;
- (void)_updateForContentCategorySizeDidChange;
- (void)_updateForLockStateDidChange:(id)arg1;
@property(retain, nonatomic) SBAttributionWrapperViewController *attributionViewController; // @synthesize attributionViewController=_attributionViewController;
@property(readonly, nonatomic) UIControl *button; // @synthesize button=_button;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
- (void)layoutSubviews;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

