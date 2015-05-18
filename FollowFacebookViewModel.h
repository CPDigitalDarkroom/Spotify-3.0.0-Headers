//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FollowBaseViewModel.h"

@class NSArray, NSString;

@interface FollowFacebookViewModel : FollowBaseViewModel
{
    NSString *_searchString;
    id <SPTResolver> _resolver;
    NSArray *_unfilteredEntities;
}

@property(retain, nonatomic) NSArray *unfilteredEntities; // @synthesize unfilteredEntities=_unfilteredEntities;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (void)filterUsers;
- (void)parseSuccessfulResponseDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithOfflineModeState:(id)arg1 currentUsername:(id)arg2 apolloDataLoader:(id)arg3 serviceName:(id)arg4 endpointPath:(id)arg5 resolver:(id)arg6;

// Remaining properties
@property(nonatomic) __weak id <FollowFacebookViewModelDelegate> delegate;

@end

