/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIScrollView.h"

@class SBAppSwitcherPageView;

@interface SBAppSwitcherItemScrollView : UIScrollView
{
    SBAppSwitcherPageView *_item;
    long long _layoutOrientation;
}

- (void)_disableScrolling;
- (void)_enableScrolling;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SBAppSwitcherPageView *item; // @synthesize item=_item;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void)layoutSubviews;

@end

