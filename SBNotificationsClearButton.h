/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIControl.h"

@class NSMutableArray, NSString, UIImageView;

@interface SBNotificationsClearButton : UIControl
{
    NSString *_title;
    UIImageView *_circleImageView;
    UIImageView *_xImageView;
    UIImageView *_compositeCircleXImageView;
    NSMutableArray *_glyphImageViews;
    unsigned long long _animatingTransitionCount;
    long long _graphicsQuality;
    long long _clearButtonState;
}

+ (id)_circleImageWithGraphicsQuality:(long long)arg1;
+ (id)_xImageWithGraphicsQuality:(long long)arg1;
+ (id)compositeCircleXImageWithGraphicsQuality:(long long)arg1;
- (struct CGRect)_circleBoundsForState:(long long)arg1;
- (struct CGRect)_circleFrameForState:(long long)arg1;
- (id)_circleImage;
- (id)_glyphFramesWithCircleFrame:(struct CGRect)arg1 forState:(long long)arg2;
- (id)_glyphImagesFromAttributedString:(id)arg1;
- (void)_layoutSubviewsForState:(long long)arg1;
- (struct CGRect)_unrolledCircleBounds;
- (struct CGRect)_xFrameWithCircleFrame:(struct CGRect)arg1 forState:(long long)arg2;
- (id)_xImage;
@property(readonly, nonatomic) long long clearButtonState; // @synthesize clearButtonState=_clearButtonState;
- (id)compositeCircleXImage;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(readonly, nonatomic) long long graphicsQuality; // @synthesize graphicsQuality=_graphicsQuality;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1 graphicsQuality:(long long)arg2;
- (void)layoutSubviews;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

