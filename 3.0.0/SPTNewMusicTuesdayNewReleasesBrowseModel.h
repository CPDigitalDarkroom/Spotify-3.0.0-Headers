//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBrowseRequest.h"

#import "SPTCeramicRequest.h"

@class NSArray, NSMutableArray, NSString, NSURL;

@interface SPTNewMusicTuesdayNewReleasesBrowseModel : SPTBrowseRequest <SPTCeramicRequest>
{
    NSArray *_elements;
    NSMutableArray *_mutableElements;
}

@property(retain, nonatomic) NSMutableArray *mutableElements; // @synthesize mutableElements=_mutableElements;
@property(retain, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (void).cxx_destruct;
- (unsigned int)numberOfItemsPerPage;
- (void)parseResponseDictionary;

// Remaining properties
@property(readonly, nonatomic) NSURL *URI;
@property(nonatomic) __weak id <SPTCeramicRequestDelegate> ceramicDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property(readonly, nonatomic) BOOL shouldReloadWhenOnlineStateChanges;
@property(readonly, nonatomic) id <SPTCeramicSpace> space;
@property(readonly) Class superclass;

@end

