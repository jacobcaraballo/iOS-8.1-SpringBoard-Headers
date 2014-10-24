/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBCollectionViewCell.h"

#import "SBUIBannerView-Protocol.h"

@class NSString, SBBannerContextView, UIView;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView>
{
    SBBannerContextView *_contextView;
    UIView *_darkeningOverlayView;
}

- (id)bannerContext;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)noteDidAppear;
- (void)noteDidDismiss;
- (void)noteWillAppear;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)prepareForReuse;
- (void)setBannerContext:(id)arg1;
- (_Bool)shouldBorrowScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
