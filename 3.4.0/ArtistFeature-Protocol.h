//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol ArtistFeature <NSObject>
+ (NSString *)featureVersion;
- (void)playerContextForArtist:(NSURL *)arg1 onCompletion:(void (^)(SPTPlayerContext *))arg2;
- (void)preloadAlbumViewData:(unsigned long long)arg1 forArtist:(NSURL *)arg2 usingResolver:(id <SPTResolver>)arg3;
- (void)preloadAlbumViewData:(unsigned long long)arg1 forArtist:(NSURL *)arg2;
- (void)preloadViewDataForArtist:(NSURL *)arg1 usingResolver:(id <SPTResolver>)arg2;
- (void)preloadViewDataForArtist:(NSURL *)arg1;
@end

