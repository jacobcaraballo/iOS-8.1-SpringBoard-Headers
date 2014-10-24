/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBSnapshotDataProvider-Protocol.h"

@class NSString, SBSnapshotDataProviderContext, UIImage;

@interface SBUIImagePNGSnapshotDataProvider : NSObject <SBSnapshotDataProvider>
{
    UIImage *_image;
    SBSnapshotDataProviderContext *_context;
}

@property(readonly, retain, nonatomic) SBSnapshotDataProviderContext *context; // @synthesize context=_context;
- (void)dealloc;
- (id)fetchData;
- (id)initWithUIImage:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
