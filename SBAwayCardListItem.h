/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBAwayListItem.h"

@class NSString, SBSCardItem, UIImage;

@interface SBAwayCardListItem : SBAwayListItem
{
    SBSCardItem *_cardItem;
    UIImage *_cardThumbnail;
    UIImage *_iconImage;
}

@property(readonly, nonatomic) NSString *body;
@property(copy, nonatomic) SBSCardItem *cardItem; // @synthesize cardItem=_cardItem;
@property(retain, nonatomic) UIImage *cardThumbnail; // @synthesize cardThumbnail=_cardThumbnail;
- (void)dealloc;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (_Bool)inertWhenLocked;
- (id)sortDate;
@property(readonly, nonatomic) NSString *title;

@end

