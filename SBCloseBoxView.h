/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIButton.h"

@class SBIconBlurryBackgroundView, SBIconColorSettings, UIImageView, UIView;

@interface SBCloseBoxView : UIButton
{
    SBIconBlurryBackgroundView *_backgroundView;
    UIView *_whiteTintView;
    UIImageView *_xColorBurnView;
    UIImageView *_xPlusDView;
    SBIconColorSettings *_colorSettings;
    struct CGPoint _wallpaperRelativeCenter;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (void)setWallpaperRelativeCenter:(struct CGPoint)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
