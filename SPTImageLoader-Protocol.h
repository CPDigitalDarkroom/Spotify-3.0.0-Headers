//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, UIImage;

@protocol SPTImageLoader <NSObject>
+ (NSString *)persistentKeyForURL:(NSURL *)arg1 size:(struct CGSize)arg2;
@property(nonatomic) __weak id <SPTImageLoaderDelegate> delegate;
- (void)cancelAllLoads;
- (BOOL)isURL:(NSURL *)arg1 persistedForKey:(NSString *)arg2;
- (BOOL)removePersistantURLsNotInArray:(NSArray *)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
- (BOOL)removePersistantURL:(NSURL *)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
- (void)persistImage:(UIImage *)arg1 forURL:(NSURL *)arg2 withKey:(NSString *)arg3;
- (id <SPTImageLoaderRequest>)loadImageForURL:(NSURL *)arg1 size:(struct CGSize)arg2 context:(id)arg3;
@end
