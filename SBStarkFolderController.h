/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBFolderController.h"

@class NSIndexPath, SBIcon;

@interface SBStarkFolderController : SBFolderController
{
    NSIndexPath *_focusedIndex;
    unsigned long long _interactionAffordances;
    _Bool _supportsKnobEvents;
}

- (Class)_contentViewClass;
- (id)_iconPageIndicatorImageSetCache;
- (void)_setFocusedIndex:(id)arg1 animated:(_Bool)arg2 scrollToPageIfNecessary:(_Bool)arg3;
- (void)dealloc;
- (void)focusChangedByAmount:(long long)arg1;
@property(retain, nonatomic) SBIcon *focusedIcon;
@property(retain, nonatomic) NSIndexPath *focusedIndex;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;
@property(nonatomic) unsigned long long interactionAffordances;
- (void)setFocusedIndex:(id)arg1 animated:(_Bool)arg2;
- (void)setInnerFolderController:(id)arg1;

@end
