/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@interface SBIconStateArchiver : NSObject
{
}

+ (Class)_folderClassForFolderType:(id)arg1 context:(id)arg2;
+ (id)_folderFromRepresentation:(id)arg1 withContext:(id)arg2;
+ (id)_folderTypeForFolder:(id)arg1;
+ (id)_iTunesDictionaryForDownloadingIcon:(id)arg1;
+ (id)_iTunesDictionaryForLeafIcon:(id)arg1;
+ (id)_iTunesDictionaryForLeafIdentifier:(id)arg1;
+ (id)_iTunesIconCellForCell:(id)arg1 preApex:(_Bool)arg2 pending:(_Bool)arg3 iconSource:(id)arg4;
+ (id)_iTunesIconListForList:(id)arg1 preApex:(_Bool)arg2 pending:(_Bool)arg3 iconSource:(id)arg4;
+ (id)_iTunesIconListsForLists:(id)arg1 preApex:(_Bool)arg2 pending:(_Bool)arg3 iconSource:(id)arg4;
+ (id)_iconFromRepresentation:(id)arg1 withContext:(id)arg2;
+ (id)_listFromRepresentation:(id)arg1 withMaxIconCount:(unsigned long long)arg2 context:(id)arg3 overflow:(id)arg4;
+ (id)_migrateLeafIdentifierIfNecessary:(id)arg1;
+ (id)_modernIconCellForCell:(id)arg1 allowFolders:(_Bool)arg2;
+ (id)_modernIconListForList:(id)arg1 allowFolders:(_Bool)arg2;
+ (id)_modernIconListsForLists:(id)arg1 allowFolders:(_Bool)arg2;
+ (id)_newFolderIconForFolder:(id)arg1;
+ (id)_nodeFromRepresentation:(id)arg1 context:(id)arg2;
+ (id)_representationForFolder:(id)arg1;
+ (id)_representationForIcon:(id)arg1;
+ (id)_representationForList:(id)arg1;
+ (id)_representationForNode:(id)arg1;
+ (id)archive:(id)arg1;
+ (id)archiveRootFolder:(id)arg1;
+ (id)iTunesRepresentationFromRootArchive:(id)arg1 preApex:(_Bool)arg2 pending:(_Bool)arg3 iconSource:(id)arg4;
+ (id)indexPathForLeafIdentifier:(id)arg1 inArchive:(id)arg2;
+ (id)leafIdentifiersFromArchive:(id)arg1;
+ (id)modernizeRootArchive:(id)arg1;
+ (id)rootArchiveFromITunesRepresentation:(id)arg1;
+ (id)unarchive:(id)arg1 withIconSource:(id)arg2;

@end

