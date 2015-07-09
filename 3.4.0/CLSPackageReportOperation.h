//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class CLSFileManager, CLSInternalReport, NSString;

@interface CLSPackageReportOperation : NSOperation
{
    CLSInternalReport *_report;
    CLSFileManager *_fileManager;
    NSString *_finalPath;
}

@property(copy, nonatomic) NSString *finalPath; // @synthesize finalPath=_finalPath;
@property(readonly, nonatomic) CLSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) CLSInternalReport *report; // @synthesize report=_report;
- (void).cxx_destruct;
- (void)main;
- (id)packagedPathWithName:(id)arg1;
- (id)destinationDirectory;
- (id)reportPath;
- (id)compressFile:(id)arg1;
- (id)initWithReport:(id)arg1 fileManager:(id)arg2;

@end
