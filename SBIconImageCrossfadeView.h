/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBInteractionPassThroughView.h"

@class SBIconImageView, UIView, _SBAnimatableCorneredView;

@interface SBIconImageCrossfadeView : SBInteractionPassThroughView
{
    _SBAnimatableCorneredView *_containerView;
    SBIconImageView *_imageView;
    UIView *_crossfadeView;
    double _crossfadeFraction;
    double _containerScaleX;
    double _containerScaleY;
    _Bool _masksCorners;
    _Bool _performsTrueCrossfade;
    struct CGPoint _stretchAnchorPoint;
}

- (void)_updateCornerMask;
- (void)cleanup;
- (void)dealloc;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
- (void)prepareGeometry;
- (void)setFadeFraction:(double)arg1;
- (void)setMorphFraction:(double)arg1 totalScale:(double)arg2;
@property(nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;

@end

