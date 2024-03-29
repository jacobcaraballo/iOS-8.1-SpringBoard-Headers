/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SBIconModelStore <NSObject>
- (_Bool)deleteCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (id)loadDesiredIconState:(id *)arg1;
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
@end

