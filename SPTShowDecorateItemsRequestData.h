//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPodcastRequestData.h"

@class NSData, NSPredicate, NSSortDescriptor, NSString;

@interface SPTShowDecorateItemsRequestData : NSObject <SPTPodcastRequestData>
{
    NSString *_requestStringTemplate;
    NSData *_requestBody;
}

@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(retain, nonatomic) NSString *requestStringTemplate; // @synthesize requestStringTemplate=_requestStringTemplate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *requestAction;
@property(readonly, nonatomic) NSSortDescriptor *sortDescriptor;
@property(readonly, nonatomic) NSPredicate *filterPredicate;
- (id)initWithItemURIs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isGrouped) BOOL grouped;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

