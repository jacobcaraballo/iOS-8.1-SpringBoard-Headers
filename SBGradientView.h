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

@interface SBGradientView : UIView
{
    NSArray *_colors;
}

+ (Class)layerClass;
- (id)color;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property struct CGPoint endPoint;
@property(copy, nonatomic) NSArray *locations;
@property struct CGPoint startPoint;

@end

