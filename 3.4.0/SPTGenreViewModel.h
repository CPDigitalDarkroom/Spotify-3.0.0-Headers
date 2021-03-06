//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTApolloDataLoaderDelegate.h"
#import "SPTCeramicRequest.h"

@class NSString, NSURL, SPTGenreSpace;

@interface SPTGenreViewModel : NSObject <SPTApolloDataLoaderDelegate, SPTCeramicRequest>
{
    id <SPTCeramicRequestDelegate> _ceramicDelegate;
    NSURL *_URI;
    SPTGenreSpace *_space;
    id <SPTApolloDataLoader> _dataLoader;
    id <SPTApolloDataLoaderRequestToken> _currentRequestToken;
}

@property(retain, nonatomic) id <SPTApolloDataLoaderRequestToken> currentRequestToken; // @synthesize currentRequestToken=_currentRequestToken;
@property(readonly, nonatomic) id <SPTApolloDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTGenreSpace *space; // @synthesize space=_space;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(nonatomic) __weak id <SPTCeramicRequestDelegate> ceramicDelegate; // @synthesize ceramicDelegate=_ceramicDelegate;
- (void).cxx_destruct;
- (void)apolloDataLoader:(id)arg1 didEncounterError:(id)arg2 forRequestWithToken:(id)arg3;
- (void)apolloDataLoader:(id)arg1 didLoadData:(id)arg2 forRequestWithToken:(id)arg3;
- (void)cancelCurrentConnection;
- (void)load;
@property(readonly, nonatomic) _Bool shouldReloadWhenOnlineStateChanges;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, copy, nonatomic) NSURL *headerButtonPlaybackURL;
@property(readonly, copy, nonatomic) NSString *headerButtonTitle;
@property(readonly, nonatomic) unsigned long long headerButtonIcon;
@property(readonly, copy, nonatomic) NSURL *headerImageURL;
@property(readonly, copy, nonatomic) NSString *headerDescriptionText;
@property(readonly, copy, nonatomic) NSString *headerTitle;
@property(readonly, nonatomic) _Bool headerShouldAlwaysBeCollapsed;
- (double)bottomInsetForBlockAtIndex:(unsigned long long)arg1;
- (double)topInsetForBlockAtIndex:(unsigned long long)arg1;
- (id)dateForItemAtIndex:(unsigned long long)arg1 inBlockAtIndex:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

