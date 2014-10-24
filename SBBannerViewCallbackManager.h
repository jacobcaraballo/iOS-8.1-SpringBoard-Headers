/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class UIView<SBUIBannerView>;

@interface SBBannerViewCallbackManager : NSObject
{
    UIView<SBUIBannerView> *_view;
    id <SBUIBannerSource> _source;
    _Bool _sentWillAppear;
    _Bool _sentDidAppear;
    _Bool _sentWillDismiss;
    _Bool _sentDidDismiss;
    int _dismissReason;
}

- (void)dealloc;
- (_Bool)hasSentAnyCallbacks;
- (id)init;
- (id)initWithBannerView:(id)arg1;
- (void)matchPreviousCallbacks:(id)arg1;
- (void)noteDidAppear;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteWillAppear;
- (void)noteWillDismissWithReason:(int)arg1;

@end

