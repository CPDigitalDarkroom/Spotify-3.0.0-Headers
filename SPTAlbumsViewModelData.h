//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAlbumsViewModelData.h"

@class NSArray, NSString;

@interface SPTAlbumsViewModelData : NSObject <SPTAlbumsViewModelData>
{
    NSArray *_albums;
    unsigned int _albumsCount;
    double _loadTime;
}

@property(nonatomic) unsigned int albumsCount; // @synthesize albumsCount=_albumsCount;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(nonatomic) double loadTime; // @synthesize loadTime=_loadTime;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

