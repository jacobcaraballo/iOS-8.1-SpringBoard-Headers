/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject-Protocol.h"

@protocol SiriUISuggestionsViewDelegate <NSObject>

@optional
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;
- (void)getNextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2 completion:(id)arg3;
- (id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (double)statusBarHeightForSuggestionsView:(id)arg1;
- (double)statusViewHeightForSuggestionsView:(id)arg1;
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;
@end

