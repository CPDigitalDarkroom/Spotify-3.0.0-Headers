//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTCollectionAlbumModel;

@protocol SPTCollectionAlbumModelDelegate <NSObject>

@optional
- (void)albumModelOfflineStateChanged:(SPTCollectionAlbumModel *)arg1;
- (void)albumModelFailedToLoad:(SPTCollectionAlbumModel *)arg1 withError:(NSError *)arg2;
- (void)albumModelDidLoad:(SPTCollectionAlbumModel *)arg1;
- (void)albumModelDidUpdateSessionOfflineStatus:(SPTCollectionAlbumModel *)arg1;
- (void)albumModelDidLoadFullAlbumContext:(SPTCollectionAlbumModel *)arg1;
- (void)albumModelDidUpdatePlayingRow:(SPTCollectionAlbumModel *)arg1;
- (void)albumModelDidUpdate:(SPTCollectionAlbumModel *)arg1;
@end
