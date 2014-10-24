/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SBAppSwitcherScrollingViewDelegate <NSObject>
- (double)reachabilityOffsetForSwitcherScroller:(id)arg1;
- (void)switcherScroller:(id)arg1 contentOffsetChanged:(double)arg2;
- (_Bool)switcherScroller:(id)arg1 displayItemWantsToBeKeptInViewHierarchy:(id)arg2;
- (void)switcherScroller:(id)arg1 displayItemWantsToBeRemoved:(id)arg2;
- (_Bool)switcherScroller:(id)arg1 isDisplayItemRemovable:(id)arg2;
- (void)switcherScroller:(id)arg1 itemTapped:(id)arg2;
- (void)switcherScroller:(id)arg1 updatedPeakPageOffset:(double)arg2;
- (id)switcherScroller:(id)arg1 viewForDisplayLayout:(id)arg2;
- (void)switcherScrollerBeganMoving:(id)arg1;
- (void)switcherScrollerBeganPanning:(id)arg1;
- (void)switcherScrollerDidEndScrolling:(id)arg1;
- (double)switcherScrollerDistanceBetweenItemCenters:(id)arg1 forOrientation:(long long)arg2;
- (_Bool)switcherScrollerIsRelayoutBlocked:(id)arg1;
- (struct CGSize)switcherScrollerItemSize:(id)arg1 forOrientation:(long long)arg2;
@end

