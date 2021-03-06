//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession, NSError;

@interface TSLibraryImport : NSObject
{
    AVAssetExportSession *exportSession;
    NSError *movieFileErr;
}

+ (id)extensionForAssetURL:(id)arg1;
+ (_Bool)validIpodLibraryURL:(id)arg1;
- (void)dealloc;
@property(readonly) float progress;
@property(readonly) long long status;
@property(readonly) NSError *error;
- (void)extractQuicktimeMovie:(id)arg1 toFile:(id)arg2;
- (void)importAsset:(id)arg1 toURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)doMp3ImportToFile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

