/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@class NSArray;

@interface SBBannerButtonView : UIView
{
    NSArray *_buttons;
}

- (double)_buttonHeight;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

