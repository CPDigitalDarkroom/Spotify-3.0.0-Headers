//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SPTHubDictionaryTransformable.h"

@class NSString;

@interface SPTHubBlockTinkerbellData : NSObject <SPTHubDictionaryTransformable, NSCopying>
{
    _Bool _completedByUserInteractions;
    NSString *_storyIdentifier;
    NSString *_itemIdentifier;
    unsigned long long _itemType;
}

@property(readonly, nonatomic) _Bool completedByUserInteractions; // @synthesize completedByUserInteractions=_completedByUserInteractions;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(readonly, copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, copy, nonatomic) NSString *storyIdentifier; // @synthesize storyIdentifier=_storyIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 dataExtractor:(id)arg2;
- (id)initWithStoryIdentifier:(id)arg1 itemIdentifier:(id)arg2 itemType:(unsigned long long)arg3 completedByUserInteractions:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
