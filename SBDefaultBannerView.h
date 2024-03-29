/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

#import "SBUIBannerView-Protocol.h"
#import "SBVibrantBannerView-Protocol.h"

@class NSString, SBDefaultBannerTextView, SBUIBannerContext, UIImageView;

@interface SBDefaultBannerView : UIView <SBUIBannerView, SBVibrantBannerView>
{
    SBUIBannerContext *_context;
    id <SBDefaultBannerViewSource> _viewSource;
    UIImageView *_iconImageView;
    SBDefaultBannerTextView *_textView;
    UIImageView *_attachmentImageView;
    UIView *_secondaryContentView;
}

+ (id)_defaultRelevanceDateColor;
+ (id)defaultColorForElement:(long long)arg1;
- (struct CGRect)_attachmentImageViewFrame;
- (struct CGRect)_contentFrame;
- (struct CGRect)_contentFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)_iconImageViewFrame;
- (double)_iconInsetY;
- (id)_relevanceDateColor;
- (struct CGRect)_secondaryContentFrame;
- (struct CGRect)_secondaryContentFrameForBounds:(struct CGRect)arg1;
- (double)_secondaryContentInsetY;
- (void)_setRelevanceDateColor:(id)arg1;
- (double)_textInsetX;
- (struct CGRect)_textViewFrame;
- (struct CGRect)_textViewFrameForBounds:(struct CGRect)arg1;
- (id)bannerContext;
- (id)colorForElement:(long long)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setColor:(id)arg1 forElement:(long long)arg2;
- (void)setPercentPulledDown:(double)arg1;
- (void)setSecondaryContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

