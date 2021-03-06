//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBDialog, NSError, NSURL;

@protocol FBDialogDelegate <NSObject>

@optional
- (_Bool)dialog:(FBDialog *)arg1 shouldOpenURLInExternalBrowser:(NSURL *)arg2;
- (void)dialog:(FBDialog *)arg1 didFailWithError:(NSError *)arg2;
- (void)dialogDidNotComplete:(FBDialog *)arg1;
- (void)dialogDidNotCompleteWithUrl:(NSURL *)arg1;
- (void)dialogCompleteWithUrl:(NSURL *)arg1;
- (void)dialogDidComplete:(FBDialog *)arg1;
@end

