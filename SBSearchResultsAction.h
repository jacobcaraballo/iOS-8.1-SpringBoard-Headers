/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSArray, SBSearchResultsActionManager, SPSearchResult, SPSearchResultSection;

@interface SBSearchResultsAction : NSObject
{
    SPSearchResult *_result;
    SPSearchResultSection *_section;
    NSArray *_urls;
    SBSearchResultsActionManager *_actionManager;
}

+ (id)actionForResult:(id)arg1 inSection:(id)arg2;
@property(nonatomic) SBSearchResultsActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (void)cancelAnimated:(_Bool)arg1 withCompletionBlock:(id)arg2;
- (void)dealloc;
- (id)performWithCompletionBlock:(id)arg1;
@property(readonly) SPSearchResult *result; // @synthesize result=_result;
@property(readonly) SPSearchResultSection *section; // @synthesize section=_section;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;

@end

