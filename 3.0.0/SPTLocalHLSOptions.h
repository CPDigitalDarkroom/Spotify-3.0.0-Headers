//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTLocalHLSOptions : NSObject
{
    unsigned int _type;
    unsigned int _profileID;
    unsigned int _segmentIndex;
}

@property(readonly, nonatomic) unsigned int segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(readonly, nonatomic) unsigned int profileID; // @synthesize profileID=_profileID;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (id)initWithType:(unsigned int)arg1 profileID:(unsigned int)arg2 segmentIndex:(unsigned int)arg3;

@end

