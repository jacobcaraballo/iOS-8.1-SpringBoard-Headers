/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIViewController.h"

#import "SBControlCenterObserver-Protocol.h"
#import "SBControlCenterSectionViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_UIBackdropViewObserver-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSMutableArray, NSString, SBControlCenterContainerView, SBControlCenterContentView, SBControlCenterSettings, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SBControlCenterViewController : UIViewController <UIGestureRecognizerDelegate, SBControlCenterSectionViewControllerDelegate, _UISettingsKeyObserver, _UIBackdropViewObserver, SBControlCenterObserver>
{
    SBControlCenterContainerView *_containerView;
    SBControlCenterContentView *_contentView;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    NSMutableArray *_sectionList;
    SBControlCenterSettings *_settings;
    _Bool _presented;
    _Bool _transitioning;
    id <SBControlCenterViewControllerDelegate> _delegate;
}

- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_noteControlCenterControlDidActivate:(id)arg1;
- (void)_noteControlCenterControlDidDeactivate:(id)arg1;
- (void)abortAnimatedTransition;
- (void)backdropViewDidChange:(id)arg1;
- (id)chevronView;
- (double)contentHeightForOrientation:(long long)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterWillPresent;
- (void)dealloc;
@property(nonatomic) id <SBControlCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
- (void)loadView;
- (void)noteSectionEnabledStateDidChange:(id)arg1;
@property(nonatomic) double revealPercentage;
- (void)section:(id)arg1 publishStatusUpdate:(id)arg2;
- (void)sectionWantsControlCenterDismissal:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)trackChevronView:(id)arg1;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

