//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTShareNetworkData : NSObject
{
    long long _network;
    long long _connectionStatus;
    NSString *_idString;
    NSString *_displayName;
}

+ (id)defaultNetworkDataWithNetworkType:(long long)arg1;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *idString; // @synthesize idString=_idString;
@property(nonatomic) long long connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(nonatomic) long long network; // @synthesize network=_network;
- (void).cxx_destruct;
- (void)parseDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

