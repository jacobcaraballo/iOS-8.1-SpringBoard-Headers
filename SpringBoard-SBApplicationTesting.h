/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SpringBoard.h"

@interface SpringBoard (SBApplicationTesting)
- (void)_cleanUpLaunchTestState;
- (void)_handleApplicationExit:(id)arg1;
- (void)_retryLaunchTestWithOptions:(id)arg1;
- (void)_runAppSwitcherBringupTest;
- (void)_runAppSwitcherDismissTest;
- (void)_runControlCenterBringupTest;
- (void)_runControlCenterDismissTest;
- (void)_runDisplayAlertTest:(id)arg1;
- (void)_runNotificationCenterBringupTest;
- (void)_runNotificationCenterDismissTest;
- (void)_runNotificationCenterWidgetLaunchTest:(id)arg1;
- (void)_runScrollAppSwitcherTest:(id)arg1;
- (void)_runScrollIconListTest;
- (void)_runScrollNotificationCenterTest:(id)arg1;
- (void)_runUnlockTest;
- (_Bool)_shouldPendAlertsForTest:(id)arg1;
- (void)_unscatterWillBegin:(id)arg1;
- (void)_workspaceTransactionCompleted:(id)arg1;
- (void)endLaunchTest;
- (void)failedTest:(id)arg1 withResults:(id)arg2;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(id)arg4;
- (void)runRotationTest:(int)arg1;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;
- (void)startedTest:(id)arg1;
@end

