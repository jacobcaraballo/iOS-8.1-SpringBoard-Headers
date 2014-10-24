/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIActivityContinuationAction.h"

@class LSBestAppSuggestion, NSDictionary;

@interface SBActivityContinuationAction : UIActivityContinuationAction
{
    NSDictionary *_settings;
    long long launchSource;
    LSBestAppSuggestion *_appSuggestion;
}

@property(retain, nonatomic) LSBestAppSuggestion *appSuggestion; // @synthesize appSuggestion=_appSuggestion;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 activityTypeIdentifier:(id)arg2 appSuggestion:(id)arg3 launchSource:(long long)arg4;
@property(nonatomic) long long launchSource; // @synthesize launchSource;
@property(readonly, nonatomic) NSDictionary *settings;

@end

