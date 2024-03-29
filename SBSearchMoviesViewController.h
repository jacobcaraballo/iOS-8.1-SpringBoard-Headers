/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UICollectionViewController.h"

#import "SBSearchResultDetailsViewController-Protocol.h"

@class NSArray, NSString, NSURLSessionDataTask, SPSearchResult, SPSearchResultSection, UIColor;

@interface SBSearchMoviesViewController : UICollectionViewController <SBSearchResultDetailsViewController>
{
    NSURLSessionDataTask *_dataTask;
    id <SBSearchResultDetailsViewControllerDelegate> actionDelegate;
    SPSearchResult *_result;
    SPSearchResultSection *_section;
    NSArray *_movies;
}

+ (id)viewControllerForResult:(id)arg1 inSection:(id)arg2;
@property id <SBSearchResultDetailsViewControllerDelegate> actionDelegate; // @synthesize actionDelegate;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain) UIColor *contentBackgroundColor;
- (void)dealloc;
- (void)loadWithCompletionBlock:(id)arg1;
@property(retain) NSArray *movies; // @synthesize movies=_movies;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
@property(retain) SPSearchResult *result; // @synthesize result=_result;
@property(retain) SPSearchResultSection *section; // @synthesize section=_section;
@property(readonly) _Bool wantsInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

