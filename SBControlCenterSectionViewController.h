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

@class NSString;

@interface SBControlCenterSectionViewController : UIViewController <SBControlCenterObserver>
{
    id <SBControlCenterSectionViewControllerDelegate> _delegate;
}

+ (Class)viewClass;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
@property(nonatomic) id <SBControlCenterSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)enabledForOrientation:(long long)arg1;
- (void)loadView;
- (void)noteSettingsDidUpdate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

