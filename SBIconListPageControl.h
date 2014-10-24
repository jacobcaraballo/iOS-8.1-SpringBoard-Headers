/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIPageControl.h"

@class SBIconPageIndicatorImageSetCache, SBIconPageIndicatorImageSetResult;

@interface SBIconListPageControl : UIPageControl
{
    id <SBIconListPageControlDelegate> _delegate;
    _Bool _hasSetLegibility;
    SBIconPageIndicatorImageSetResult *_pageIndicatorImageSets;
    _Bool _legibilityEnabled;
    SBIconPageIndicatorImageSetCache *_imageSetCache;
}

- (id)_iconListIndicatorImage:(_Bool)arg1;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;
- (void)_setIndicatorImage:(id)arg1 toEnabled:(_Bool)arg2;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (void)dealloc;
- (double)defaultHeight;
@property(nonatomic) id <SBIconListPageControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache *imageSetCache; // @synthesize imageSetCache=_imageSetCache;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool legibilityEnabled; // @synthesize legibilityEnabled=_legibilityEnabled;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

