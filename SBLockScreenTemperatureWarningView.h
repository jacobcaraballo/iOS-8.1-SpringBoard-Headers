/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBLockOverlayView.h"

@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView
{
    UIImageView *_warningIconView;
}

- (double)_iconYPosition;
- (double)_subtitleBaseline;
- (id)_subtitleFont;
- (double)_titleBaseline;
- (id)_titleFont;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
