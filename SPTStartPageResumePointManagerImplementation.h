//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTStartPageResumePointManager.h"

@class NSMutableDictionary, NSString;

@interface SPTStartPageResumePointManagerImplementation : NSObject <SPTStartPageResumePointManager>
{
    NSMutableDictionary *_playerStates;
    id <SPTShowEntityService> _showEntityService;
}

@property(retain, nonatomic) id <SPTShowEntityService> showEntityService; // @synthesize showEntityService=_showEntityService;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
- (void).cxx_destruct;
- (void)storeLocallyContextResumeState:(id)arg1 forURI:(id)arg2;
- (id)fetchLocalContextResumeStateForURI:(id)arg1;
- (void)fetchContextResumeStateForURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)persistContextResumeState:(id)arg1 forURI:(id)arg2;
- (id)initWithShowEntityService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

