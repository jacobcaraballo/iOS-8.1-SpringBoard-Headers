/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@class UIImageView;

@interface SBHighlightView : UIView
{
    UIImageView *_highlight;
    double _highlightAlpha;
    double _highlightHeight;
}

+ (id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2;
- (void)dealloc;
@property(readonly, nonatomic) double highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
@property(readonly, nonatomic) double highlightHeight; // @synthesize highlightHeight=_highlightHeight;
- (id)initWithFrame:(struct CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3;
- (void)layoutSubviews;

@end
