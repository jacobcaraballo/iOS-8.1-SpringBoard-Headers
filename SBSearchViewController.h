/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIViewController.h"

#import "SBReachabilityObserver-Protocol.h"
#import "SBSearchGestureObserver-Protocol.h"
#import "SBSearchHeaderDelegate-Protocol.h"
#import "SBSearchResultsActionManagerDelegate-Protocol.h"
#import "SBUIActiveOrientationObserver-Protocol.h"
#import "SPSearchAgentDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SBSearchFirstTimeViewController, SBSearchHeader, SBSearchResultsActionManager, SBSearchResultsBackdropView, UIGestureRecognizer, UILabel, UINavigationController, UIPanGestureRecognizer, UITableView, UITapGestureRecognizer, UIWindow;

@interface SBSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPSearchAgentDelegate, SBSearchGestureObserver, UISearchBarDelegate, SBSearchResultsActionManagerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, SBUIActiveOrientationObserver, SBReachabilityObserver, SBSearchHeaderDelegate>
{
    UINavigationController *_navigationController;
    UIViewController *_mainViewController;
    SBSearchFirstTimeViewController *_firstTimeViewController;
    UITableView *_tableView;
    SBSearchHeader *_searchHeader;
    SBSearchResultsBackdropView *_tableBackdrop;
    SBSearchResultsActionManager *_actionManager;
    UIWindow *_presentingWindow;
    long long _presentingWindowOrientation;
    UILabel *_noResultsLabel;
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    void *_addressBook;
    double _lastContentOffsetY;
    _Bool _scrollDown;
    long long _visibility;
    double _headerHeight;
    _Bool _hasShownBackgroundSinceLastClear;
    long long _firstTimeViewShowCount;
    _Bool _canShowFirstTimeView;
    double _triggerTimestamp;
    struct CGPoint _preReachabilityTableViewOrigin;
    struct CGPoint _reachabilityTableViewOrigin;
    _Bool _showingForReachability;
    UIGestureRecognizer *_cancelRecognizer;
    id _fadeOutCompletionBlock;
}

+ (id)sharedInstance;
- (id)_actionManager;
- (void)_animateForReachabilityActivatedWithHandler:(id)arg1;
- (void)_animateForReachabilityDeactivatedWithHandler:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_deselectTableViewCell;
- (void)_fadeForLaunchWithDuration:(double)arg1 completion:(id)arg2;
- (void)_fadeOutAndHideKeyboardAnimated:(_Bool)arg1 completionBlock:(id)arg2;
- (void)_handleDismissGesture;
- (void)_handlePanRecognizer:(id)arg1;
- (void)_handleTapRecognizer:(id)arg1;
- (_Bool)_hasNoQuery;
- (_Bool)_hasNoResultsForQuery;
- (_Bool)_hasResults;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_lockScreenUIWillLock:(id)arg1;
- (void)_performReachabilityTransactionForActivate:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)_rotatePresentingWindowIfNecessaryTo:(long long)arg1 withDuration:(double)arg2;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldReturnPressed;
- (void)_sendAbandonmentFeedback;
- (void)_sendFeedback:(id)arg1;
- (void)_setFirstTimeViewVisible:(_Bool)arg1;
- (void)_setShowingKeyboard:(_Bool)arg1;
- (_Bool)_showFirstTimeView;
- (_Bool)_showingKeyboard;
- (void)_updateCellClipping:(id)arg1;
- (void)_updateClipping;
- (void)_updateHeaderHeightIfNeeded;
- (void)_updateTableContents;
- (void)actionManager:(id)arg1 dismissAnimated:(_Bool)arg2 completionBlock:(id)arg3;
- (void)actionManager:(id)arg1 dismissViewController:(id)arg2 completion:(id)arg3 animated:(void)arg4;
- (void)actionManager:(id)arg1 presentViewController:(id)arg2 completion:(id)arg3 modally:(void)arg4;
- (struct UIEdgeInsets)actionManagerDetailsViewEdgeInsets:(id)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)attributionButtonTapped:(id)arg1;
- (void)cancelButtonPressed;
- (void)dealloc;
- (void)dismiss;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (id)init;
@property(readonly, nonatomic, getter=isFadingOut) _Bool fadingOut;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)loadView;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (struct UIEdgeInsets)searchBorderMarginsForSearchField:(_Bool)arg1 cancelMargins:(struct UIEdgeInsets *)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
