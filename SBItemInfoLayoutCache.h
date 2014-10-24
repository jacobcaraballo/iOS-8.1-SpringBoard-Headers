/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@interface SBItemInfoLayoutCache : NSObject
{
    double _cachedViewHeight;
    struct CGSize _referenceSize;
    long long _layoutMode;
}

- (_Bool)_isLayoutValidWithReferenceSize:(struct CGSize)arg1 layoutMode:(long long)arg2;
- (void)invalidateCache;
- (double)viewHeightWithReferenceSize:(struct CGSize)arg1 layoutMode:(long long)arg2 generateBlock:(id)arg3;

@end
