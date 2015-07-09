//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMapTable, NSMutableArray, SPTDiskUtil;

@interface SPTRadioStationsService : NSObject
{
    NSArray *_userStations;
    NSArray *_recommendedStations;
    NSArray *_genresStations;
    NSArray *_savedStations;
    NSDate *_lastUserStationsFetch;
    id <SPTResolver> _cosmosResolver;
    NSMutableArray *_observers;
    NSMapTable *_cachedStations;
    SPTDiskUtil *_diskUtil;
    double _cacheExpirationTime;
}

@property(nonatomic) double cacheExpirationTime; // @synthesize cacheExpirationTime=_cacheExpirationTime;
@property(retain, nonatomic) SPTDiskUtil *diskUtil; // @synthesize diskUtil=_diskUtil;
@property(retain, nonatomic) NSMapTable *cachedStations; // @synthesize cachedStations=_cachedStations;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTResolver> cosmosResolver; // @synthesize cosmosResolver=_cosmosResolver;
@property(retain, nonatomic) NSDate *lastUserStationsFetch; // @synthesize lastUserStationsFetch=_lastUserStationsFetch;
@property(retain, nonatomic) NSArray *savedStations; // @synthesize savedStations=_savedStations;
@property(retain, nonatomic) NSArray *genresStations; // @synthesize genresStations=_genresStations;
@property(retain, nonatomic) NSArray *recommendedStations; // @synthesize recommendedStations=_recommendedStations;
@property(retain, nonatomic) NSArray *userStations; // @synthesize userStations=_userStations;
- (void).cxx_destruct;
- (void)fireUserStationsChangedEvent;
- (void)removeRadioStationsObserver:(id)arg1;
- (void)addRadioStationsObserver:(id)arg1;
- (void)deleteStationWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteStation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveStations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSavedStationState:(id)arg1 state:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)radioThumbTrackUrl:(id)arg1 isUp:(_Bool)arg2 forStation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)touchStation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)touchStation:(id)arg1;
- (id)createNextTracksURIForStation:(id)arg1;
- (void)loadTracksForRadioStation:(id)arg1 loadMore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreTracksForRadioStation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadTracksForRadioStation:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *userSavedStations;
- (void)saveStationToCache:(id)arg1;
- (id)getStationWithURL:(id)arg1;
- (void)createStationWithSeedURI:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)createStation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAllStationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)checkForError:(id)arg1;
- (id)stationInCollection:(id)arg1;
- (_Bool)needsUserStationsFetching;
- (id)initWithResolver:(id)arg1;

@end

