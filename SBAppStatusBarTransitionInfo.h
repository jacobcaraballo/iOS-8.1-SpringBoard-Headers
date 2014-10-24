/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject
{
    UIStatusBarStyleRequest *_startStyleRequest;
    long long _startOrientation;
    UIStatusBarStyleRequest *_endStyleRequest;
    long long _endOrientation;
    int _transition;
    _Bool _zoomOther;
}

- (void)dealloc;
- (id)description;
@property(nonatomic) long long endOrientation; // @synthesize endOrientation=_endOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest *endStyleRequest; // @synthesize endStyleRequest=_endStyleRequest;
@property(nonatomic) long long startOrientation; // @synthesize startOrientation=_startOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest *startStyleRequest; // @synthesize startStyleRequest=_startStyleRequest;
@property(nonatomic) int transition; // @synthesize transition=_transition;
@property(nonatomic) _Bool zoomOther; // @synthesize zoomOther=_zoomOther;

@end
