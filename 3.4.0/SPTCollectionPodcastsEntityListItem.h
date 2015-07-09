//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityListItem.h"

@class NSDictionary, NSString, NSURL;

@interface SPTCollectionPodcastsEntityListItem : NSObject <SPTCollectionEntityListItem>
{
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (unsigned long long)mediaType;
- (void)action;
@property(readonly, copy, nonatomic) NSString *loggingContext;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, nonatomic) NSURL *offlineURL;
@property(readonly, nonatomic) NSURL *previewURL;
@property(readonly, nonatomic) unsigned long long icon;
@property(readonly, copy, nonatomic) NSURL *trackURL;
@property(readonly, copy, nonatomic) NSURL *entityURL;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

