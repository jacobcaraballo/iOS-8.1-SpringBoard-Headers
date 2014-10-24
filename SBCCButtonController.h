/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIViewController.h"

#import "SBCCButtonModuleDelegate-Protocol.h"
#import "SBUIControlCenterButtonDelegate-Protocol.h"

@class NSString, SBCCButtonModule;

@interface SBCCButtonController : UIViewController <SBCCButtonModuleDelegate, SBUIControlCenterButtonDelegate>
{
    id <SBCCButtonControllerDelegate> _delegate;
    SBCCButtonModule *_module;
}

- (void)_updateButtonProperties;
- (void)_updateButtonState;
- (void)buttonModulePropertiesDidChange:(id)arg1;
- (void)buttonModuleStateDidChange:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) id <SBCCButtonControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)glyphImageForState:(int)arg1;
- (id)initWithModule:(id)arg1;
@property(retain, nonatomic) SBCCButtonModule *module; // @synthesize module=_module;
- (id)view;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
