//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTinkerbellStoryRegistry.h"

@class NSArray, NSMutableDictionary, NSString;

@interface SPTTinkerbellStoryRegistryImplementation : NSObject <SPTTinkerbellStoryRegistry>
{
    NSMutableDictionary *_registeredStories;
}

@property(readonly, nonatomic) NSMutableDictionary *registeredStories; // @synthesize registeredStories=_registeredStories;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *allRegisteredStories;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)storyWithIdentifier:(id)arg1;
- (void)unregisterStoryWithIdentifier:(id)arg1;
- (void)unregisterStory:(id)arg1;
- (_Bool)registerStory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

