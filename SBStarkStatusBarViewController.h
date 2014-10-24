/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIViewController.h"

#import "UIStatusBarStyleDelegate-Protocol.h"

@class NSMutableSet, NSString, UIStatusBar, UIView;

@interface SBStarkStatusBarViewController : UIViewController <UIStatusBarStyleDelegate>
{
    UIStatusBar *_statusBarView;
    id <UIStatusBarStyleDelegate> _statusBarStyleDelegate;
    long long _layoutJustification;
    NSMutableSet *_statusBarHideReasons;
    long long _requestedStyle;
    _Bool _styleHasBeenRequested;
    double _statusBarWidth;
    UIView *_separatorView;
    _Bool _separatorHidden;
}

- (_Bool)_isStatusBarHidden;
- (void)_layoutStatusBar:(id)arg1;
- (void)dealloc;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
@property(nonatomic) long long layoutJustification;
- (void)loadView;
- (id)newFakeStatusBar;
- (id)newFakeStatusBarWithStyle:(long long)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
@property(nonatomic) id <UIStatusBarStyleDelegate> statusBarStyleDelegate;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (void)updateStatusBarWithRequestedStyle:(long long)arg1 animationFactory:(id)arg2;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

