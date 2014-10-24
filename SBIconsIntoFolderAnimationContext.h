/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSArray, SBFolderIcon;

@interface SBIconsIntoFolderAnimationContext : NSObject
{
    SBFolderIcon *_folderIcon;
    NSArray *_iconSnapshots;
    NSArray *_miniSnapshots;
    NSArray *_addedIcons;
    _Bool _openFolderOnFinish;
    id _completeBlock;
}

@property(retain, nonatomic) NSArray *addedIcons; // @synthesize addedIcons=_addedIcons;
@property(copy, nonatomic) id completeBlock; // @synthesize completeBlock=_completeBlock;
- (void)dealloc;
@property(retain, nonatomic) SBFolderIcon *folderIcon; // @synthesize folderIcon=_folderIcon;
@property(retain, nonatomic) NSArray *iconSnapshots; // @synthesize iconSnapshots=_iconSnapshots;
@property(retain, nonatomic) NSArray *miniSnapshots; // @synthesize miniSnapshots=_miniSnapshots;
@property(nonatomic) _Bool openFolderOnFinish; // @synthesize openFolderOnFinish=_openFolderOnFinish;

@end

