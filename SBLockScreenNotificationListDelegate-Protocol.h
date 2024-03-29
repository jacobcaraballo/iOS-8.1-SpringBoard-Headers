/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SBLockScreenNotificationListDelegate <NSObject>
- (void)addCoordinatedPresentingController:(id)arg1;
- (void)attemptToUnlockUIFromNotification;
- (void)authenticateForNotificationActionWithCompletion:(id)arg1;
- (void)bannerEnablementChanged;
- (void)dismissFullscreenBulletinAlertWithItem:(id)arg1;
- (id)lockScreenScrollView;
- (void)modifyFullscreenBulletinAlertWithItem:(id)arg1;
- (void)notificationListBecomingVisible:(_Bool)arg1;
- (void)presentFullscreenBulletinAlertWithItem:(id)arg1;
- (void)removeCoordinatedPresentingController:(id)arg1;
@end

