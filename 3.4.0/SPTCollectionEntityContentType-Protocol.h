//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol SPTCollectionEntityContentType <NSObject>
- (unsigned long long)contentTypeIcon;
- (_Bool)updateOnTrackChange:(NSURL *)arg1;
- (_Bool)isContentTypeUrl:(NSURL *)arg1;
- (void)lookupEntityWithUrl:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSString *, NSURL *, _Bool))arg2;
@end
