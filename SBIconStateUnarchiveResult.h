/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBIconStateUnarchiveContext-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SBIconModel;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext>
{
    SBIconModel *_iconSource;
    id <SBIconIndexNode> _node;
    NSMutableArray *_folderStack;
    long long _parseDepth;
    NSMutableSet *_nodeIdentifiersUnarchived;
    _Bool _corrupted;
    _Bool _dirty;
}

- (id)_currentFolder;
- (long long)_currentParseDepth;
@property(retain, nonatomic, setter=_setIconSource:) SBIconModel *_iconSource; // @synthesize _iconSource;
- (_Bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
- (void)_noteEnteredNode;
- (void)_noteExitedNode;
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;
- (void)_noteRepresentationIsCorrupted;
- (void)_noteSignificantDeviation;
- (id)_popFolder;
- (void)_pushFolder:(id)arg1;
- (void)_setNode:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(retain, nonatomic) id <SBIconIndexNode> node; // @synthesize node=_node;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

