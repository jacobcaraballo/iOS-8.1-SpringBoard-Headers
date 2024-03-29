/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIImageView.h"

@class UIImage;

@interface SBDarkeningImageView : UIImageView
{
    UIImage *_baseImage;
    double _brightness;
}

@property(nonatomic) double brightness;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 brightness:(double)arg2;

@end

