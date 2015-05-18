//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, NSURL, SPPlaylist;

@interface SPTrackContext : NSObject
{
    struct RefPtr<sp::TrackListContext> _cppObject;
    struct scoped_connection _context_notifier_connection;
    struct RefPtr<sp::TrackListContextFilter> _filterBridge;
    NSURL *_mosaicURL;
    CDUnknownBlockType _filter;
}

+ (id)trackContextWithLink:(id)arg1 session:(id)arg2;
+ (id)KVOKeyPathsForChangeFlags:(unsigned int)arg1;
+ (id)KVOAllowedKeyPaths;
+ (id)KVOChangeFlagToKeyPathMap;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSURL *mosaicURL; // @synthesize mosaicURL=_mosaicURL;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *trackURLs;
@property(readonly, nonatomic, getter=isLoaded) BOOL loaded;
- (void)getDateAdded:(id *)arg1 andLength:(unsigned int *)arg2 forRowAtIndex:(unsigned int)arg3;
- (id)dateAddedForRowAtIndex:(unsigned int)arg1;
- (id)objectInRowsAtIndex:(unsigned int)arg1;
- (unsigned int)countOfRows;
- (void)moveTracksAtIndexes:(id)arg1 toStartingIndex:(unsigned int)arg2;
- (void)removeObjectFromTracksAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inTracksAtIndex:(unsigned int)arg2;
- (id)objectInTracksAtIndex:(unsigned int)arg1;
- (unsigned int)countOfTracks;
- (BOOL)hasPlayableContentWhenOffline;
- (BOOL)hasPlayableContentWhenOnline;
- (void)update;
- (void)setTrackSource:(char *)arg1 context:(id)arg2 sourceLink:(id)arg3;
- (void)setSortColumn:(int)arg1 reverseSortOrder:(BOOL)arg2;
@property(nonatomic) int sortColumn;
@property(retain, nonatomic) NSString *textFilter;
@property(readonly, nonatomic) NSString *trackSourceContext;
@property(readonly, nonatomic) NSURL *trackSourceLink;
@property(nonatomic, getter=isReverseSortOrder) BOOL reverseSortOrder;
@property(nonatomic) BOOL hideUnavailableTracks;
@property(nonatomic) BOOL repeat;
@property(nonatomic) BOOL shuffle;
@property(readonly, nonatomic) int playState;
@property(readonly, nonatomic) BOOL isTemporary;
@property(readonly, nonatomic) BOOL isCollection;
@property(readonly, nonatomic) BOOL isInbox;
@property(nonatomic) BOOL canSkipForward;
@property(nonatomic) BOOL canSkipBackward;
@property(nonatomic) BOOL canRepeat;
@property(nonatomic) BOOL canShuffle;
@property(readonly, nonatomic) BOOL canModify;
@property(readonly, nonatomic) BOOL canDelete;
@property(readonly, nonatomic) BOOL canAppend;
@property(readonly, nonatomic) BOOL canReorder;
@property(nonatomic) unsigned int displayMode;
@property(readonly, nonatomic) unsigned int currentRow;
@property(readonly, retain, nonatomic) SPPlaylist *playlist;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) int unreadRowsCount;
- (void)endUpdates;
- (void)beginUpdates;
- (void)contextChangeNotificationFlags:(unsigned int)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4;
- (void)setFilterByUser:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *rows; // @dynamic rows;
@property(readonly, nonatomic) NSMutableArray *tracks; // @dynamic tracks;

@end

