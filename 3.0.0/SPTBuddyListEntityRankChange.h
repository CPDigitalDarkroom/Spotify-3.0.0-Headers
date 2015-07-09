//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTBuddyListEntityRankChange : NSObject
{
    unsigned int _changeType;
    unsigned int _fromIndex;
    unsigned int _toIndex;
}

@property(readonly, nonatomic) unsigned int toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, nonatomic) unsigned int fromIndex; // @synthesize fromIndex=_fromIndex;
@property(readonly, nonatomic) unsigned int changeType; // @synthesize changeType=_changeType;
- (id)initWithMovedFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)initWithRemovedFromIndex:(unsigned int)arg1;
- (id)initWithAddedToIndex:(unsigned int)arg1;
- (id)initWithChangeType:(unsigned int)arg1;

@end
