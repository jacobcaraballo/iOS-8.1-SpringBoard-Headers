/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@class NSSet;

@protocol SBWidgetHandling <NSObject>
- (void)enableAllWidgets:(id)arg1;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)updateWidgetsWithIdentifiers:(id)arg1 launchStats:(id)arg2 completion:(id)arg3;
@property(readonly, nonatomic) NSSet *visibleWidgetIDs;
- (id)widgetWithIdentifier:(id)arg1;
@end

