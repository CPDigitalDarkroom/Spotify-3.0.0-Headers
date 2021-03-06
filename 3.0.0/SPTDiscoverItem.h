//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTDiscoverItem : NSObject
{
    NSURL *_imageURL;
    NSString *_title;
    NSURL *_titleURL;
    NSString *_subtitle;
    NSURL *_subtitleURL;
    unsigned int _itemType;
}

@property(readonly, nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSURL *subtitleURL; // @synthesize subtitleURL=_subtitleURL;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSURL *titleURL; // @synthesize titleURL=_titleURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

