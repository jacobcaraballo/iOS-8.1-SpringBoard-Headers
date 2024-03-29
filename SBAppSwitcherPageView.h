/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@class UIView<SBAppSwitcherPageContentView>;

@interface SBAppSwitcherPageView : UIView
{
    UIView *_shadowView;
    UIView *_hitTestBlocker;
    UIView<SBAppSwitcherPageContentView> *_view;
    UIView *_overlayView;
    long long _orientation;
    UIView *auxiliaryView;
}

+ (double)_horizontalEdgeBorderForOrientation:(long long)arg1;
+ (struct CGSize)sizeForOrientation:(long long)arg1;
- (struct CGAffineTransform)_transformForOrientation:(long long)arg1;
- (struct CGAffineTransform)_transformForScale;
- (struct CGRect)_viewFrame;
@property(readonly, nonatomic) UIView *auxiliaryView; // @synthesize auxiliaryView;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidate;
- (void)layoutSubviews;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlayView;
- (void)setBlocksTouches:(_Bool)arg1;
@property(nonatomic) double shadowAlpha;
- (void)setShadowEnabled:(_Bool)arg1;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // @synthesize view=_view;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

