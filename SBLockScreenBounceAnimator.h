/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "UIDynamicAnimatorDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSMutableSet, NSSet, NSString, SBBounceBehavior, SBBounceSettings, SBBouncingItem, SBBouncingSystem, UIDynamicAnimator, UIGestureRecognizer, UIView;

@interface SBLockScreenBounceAnimator : NSObject <UIDynamicAnimatorDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate>
{
    NSMutableSet *_tapExcludedViews;
    _Bool _isAnimating;
    _Bool _bounceEnabled;
    UIView *_view;
    SBBouncingSystem *_system;
    UIDynamicAnimator *_animator;
    SBBouncingItem *_item;
    SBBounceBehavior *_behavior;
    UIGestureRecognizer *_tapRecognizer;
    NSSet *_gestures;
    id _shouldBeginBlock;
    id _prepareBlock;
    id _translateBlock;
    id _canceledBlock;
    id _completedBlock;
    SBBounceSettings *_settings;
    id <SBPresentingDelegate> _presentingDelegate;
}

- (void)_addTapRecognizer;
- (void)_beginAnimating:(id)arg1;
- (void)_createAnimator;
- (void)_handleTapGesture:(id)arg1;
- (void)_removeAnimator;
- (void)_removeTapRecognizer;
- (void)_resetAnimator;
- (void)_updateSettings;
- (void)addTapExcludedView:(id)arg1;
- (void)cancelAnimation;
- (void)cancelGestureRecognizer:(id)arg1;
@property(copy) id canceledBlock; // @synthesize canceledBlock=_canceledBlock;
@property(copy) id completedBlock; // @synthesize completedBlock=_completedBlock;
- (void)dealloc;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(readonly, nonatomic) NSSet *gestures;
- (id)initWithView:(id)arg1;
- (_Bool)isAnimating;
@property(copy) id prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
- (void)reenableGestureRecognizer:(id)arg1;
- (void)removeTapExcludedView:(id)arg1;
- (void)setBounceEnabled:(_Bool)arg1;
@property(retain, nonatomic) SBBounceSettings *settings; // @synthesize settings=_settings;
@property(copy) id shouldBeginBlock; // @synthesize shouldBeginBlock=_shouldBeginBlock;
@property(copy) id translateBlock; // @synthesize translateBlock=_translateBlock;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
@property(readonly, nonatomic) NSSet *tapExcludedViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

