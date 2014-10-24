/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "FBApplicationLibraryObserver-Protocol.h"

@class FBApplicationLibrary, NSArray, NSHashTable, NSMutableDictionary, NSString;

@interface SBApplicationLibraryObserver : NSObject <FBApplicationLibraryObserver>
{
    FBApplicationLibrary *_appLibrary;
    NSMutableDictionary *_placeholdersByBundleID;
    NSHashTable *_applicationObservers;
    NSHashTable *_placeholderObservers;
}

+ (id)sharedInstance;
- (void)_addObserver:(id)arg1 table:(id)arg2;
- (void)_removeObserver:(id)arg1 table:(id)arg2;
- (void)addApplicationLifecycleObserver:(id)arg1;
- (void)addPlaceholderLifecycleObserver:(id)arg1;
@property(readonly, nonatomic) FBApplicationLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
- (void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didAddPlaceholders:(id)arg2;
- (void)applicationLibrary:(id)arg1 didCancelPlaceholders:(id)arg2;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3;
- (void)applicationLibrary:(id)arg1 networkUsageDidChange:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (void)notePlaceholderCancelled:(id)arg1;
@property(readonly, nonatomic) NSArray *placeholders;
- (void)removeApplicationLifecycleObserver:(id)arg1;
- (void)removePlaceholderLifecycleObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

