/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@class NSMutableArray, UIImageView;

@interface SBNewsstandBackgroundView : UIView
{
    NSMutableArray *_shelfViews;
    UIImageView *_overlayGradientView;
    UIView *_bottomView;
}

+ (double)baselineForShelfAtIndex:(unsigned long long)arg1 withOrientation:(long long)arg2;
+ (double)dockHeightForOrientation:(long long)arg1;
+ (double)shelfHeightForOrientation:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

