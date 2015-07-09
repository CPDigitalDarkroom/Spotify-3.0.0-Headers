//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, NSURL, NSUUID;

@protocol SPTHubLocalContentBuilder <NSObject>
- (void)localContentUpdateComplete;
- (void)removeLocalContentBlockWithIdentifier:(NSUUID *)arg1;
- (void)removeAllItemsFromLocalContentBlockWithIdentifier:(NSUUID *)arg1;
- (void)removeLocalContentItemWithIdentifier:(NSUUID *)arg1 inBlockWithIdentifier:(NSUUID *)arg2;
- (void)replaceLocalContentItemWithIdentifier:(NSUUID *)arg1 inBlockWithIdentifier:(NSUUID *)arg2 withItemWithType:(unsigned long long)arg3 title:(NSString *)arg4 subtitle:(NSString *)arg5 imageURL:(NSURL *)arg6 actionURL:(NSURL *)arg7 metaDataTitle:(NSString *)arg8 descriptionText:(NSString *)arg9 loggingData:(NSDictionary *)arg10;
- (NSUUID *)addLocalContentItemWithType:(unsigned long long)arg1 title:(NSString *)arg2 subtitle:(NSString *)arg3 imageURL:(NSURL *)arg4 actionURL:(NSURL *)arg5 metaDataTitle:(NSString *)arg6 descriptionText:(NSString *)arg7 loggingData:(NSDictionary *)arg8 toBlockWithIdentifier:(NSUUID *)arg9;
- (NSUUID *)addLocalContentBlockWithTitle:(NSString *)arg1 renderType:(long long)arg2 footerTitle:(NSString *)arg3 footerActionURL:(NSURL *)arg4 footerTargetViewTitle:(NSString *)arg5 atIndex:(NSNumber *)arg6;
@end
