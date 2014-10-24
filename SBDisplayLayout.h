/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface SBDisplayLayout : NSObject <NSCopying>
{
    long long _layoutSize;
    NSMutableArray *_displayItems;
    NSString *_uniqueStringRepresentation;
}

+ (id)displayLayoutWithLayoutSize:(long long)arg1 displayItems:(id)arg2;
+ (id)displayLayoutWithPlistRepresentation:(id)arg1;
+ (id)fullScreenDisplayLayoutForApplication:(id)arg1;
+ (id)homeScreenDisplayLayout;
- (id)_calculateUniqueStringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
- (id)displayLayoutByAddingDisplayItem:(id)arg1 side:(long long)arg2 withLayout:(long long)arg3;
- (id)displayLayoutByRemovingDisplayItem:(id)arg1;
- (id)displayLayoutByRemovingDisplayItems:(id)arg1;
- (id)displayLayoutByReplacingDisplayItemOnSide:(long long)arg1 withDisplayItem:(id)arg2;
- (id)displayLayoutBySettingSize:(long long)arg1;
- (unsigned long long)hash;
- (id)initWithLayoutSize:(long long)arg1 displayItems:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long layoutSize; // @synthesize layoutSize=_layoutSize;
- (id)plistRepresentation;
- (id)uniqueStringRepresentation;

@end
