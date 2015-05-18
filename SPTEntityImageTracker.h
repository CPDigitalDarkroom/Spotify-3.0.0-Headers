//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSString, SPTPersistentDataCache;

@interface SPTEntityImageTracker : NSObject
{
    NSString *_path;
    NSFileManager *_fileManager;
    SPTPersistentDataCache *_persistentDataCache;
}

+ (id)entityImageTrackerWithPath:(id)arg1 persistentDataCache:(id)arg2;
@property(nonatomic) __weak SPTPersistentDataCache *persistentDataCache; // @synthesize persistentDataCache=_persistentDataCache;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)folderPathForEntity:(id)arg1;
- (id)folderPathForEntity:(id)arg1 dataKey:(id)arg2;
- (BOOL)isDataKey:(id)arg1 linkedToEntity:(id)arg2;
- (void)ceasePersistingImageDataKeysNotInArray:(id)arg1 forEntity:(id)arg2 callback:(CDUnknownBlockType)arg3 onQueue:(id)arg4;
- (void)ceasePersistingImageForEntity:(id)arg1 withDataKey:(id)arg2 callback:(CDUnknownBlockType)arg3 onQueue:(id)arg4;
- (void)persistImage:(id)arg1 withDataKey:(id)arg2 forEntity:(id)arg3 callback:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
- (void)setupDirectory;
- (id)initWithPath:(id)arg1 persistentDataCache:(id)arg2;

@end

