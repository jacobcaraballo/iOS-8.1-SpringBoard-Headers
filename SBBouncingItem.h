/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "UIDynamicItem-Protocol.h"

@class NSString;

@interface SBBouncingItem : NSObject <UIDynamicItem>
{
    struct CGRect _bounds;
    struct CGPoint _center;
    double _multiplier;
    id _translateBlock;
}

@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
- (void)dealloc;
@property double multiplier; // @synthesize multiplier=_multiplier;
- (void)setBounds:(struct CGRect)arg1;
@property(nonatomic) struct CGAffineTransform transform;
@property(copy) id translateBlock; // @synthesize translateBlock=_translateBlock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
