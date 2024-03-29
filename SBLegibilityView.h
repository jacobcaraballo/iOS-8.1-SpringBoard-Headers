/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "_UILegibilityView.h"

@class UIImage;

@interface SBLegibilityView : _UILegibilityView
{
    long long _tintColor;
    UIImage *_tintImage;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

- (id)_tintColorForSettings:(id)arg1;
- (void)dealloc;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 tintColor:(long long)arg4;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
@property(nonatomic) long long tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIImage *tintImage; // @synthesize tintImage=_tintImage;

@end

