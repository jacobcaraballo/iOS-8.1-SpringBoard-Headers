/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@class _UIBackdropView;

@interface SBBackdropContainerView : UIView
{
    _UIBackdropView *_backdropView;
}

- (void)_reallyInsertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)addSubview:(id)arg1;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(readonly, retain, nonatomic) UIView *contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)layoutSubviews;

@end

