/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "_SBFVibrantTableViewHeaderFooterView.h"

#import "SBModalLayoutCaching-Protocol.h"

@class NSString, SBNotificationsClearButton, UIImageView, UILabel;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView <SBModalLayoutCaching>
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    SBNotificationsClearButton *_clearButton;
    id _xAction;
    id _clearAction;
    _Bool _showingClear;
    long long _layoutMode;
}

+ (double)_titleBaseline;
+ (id)titleFont;
- (void)_addClearButton;
- (struct CGRect)_clearButtonFrame;
- (void)_removeClearButton;
- (void)buttonAction:(id)arg1;
- (struct CGRect)contentBounds;
- (void)dealloc;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)initialGraphicsQuality;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
- (void)layoutSubviews;
- (void)resetAnimated:(_Bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setHasClearButton:(_Bool)arg1;
- (void)setTarget:(id)arg1 forClearButtonAction:(id)arg2;
- (void)setTarget:(id)arg1 forClearButtonVisibleAction:(id)arg2;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
