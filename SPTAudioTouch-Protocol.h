//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSEnumerator, NSString, NSURL, UIGestureRecognizer, UIView;

@protocol SPTAudioTouch <NSObject>
@property(readonly, nonatomic) id <SPTAudioTouchShelves> shelves;
@property(readonly, nonatomic) id <SPTTouchViewEngine> viewEngine;
@property(readonly, nonatomic) UIGestureRecognizer *edgeScrollGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *previewGestureRecognizer;
- (void)unregisterView:(UIView *)arg1;
- (void)registerContextCollectionViewCell:(UIView *)arg1 withSpotifyURL:(NSURL *)arg2 name:(NSString *)arg3 resolverServiceName:(NSString *)arg4 resolverServicePathComponents:(NSArray *)arg5;
- (void)registerContextCollectionViewCell:(UIView *)arg1 withSpotifyURL:(NSURL *)arg2 name:(NSString *)arg3;
- (void)registerContextTableViewCell:(UIView *)arg1 byEnumeratingItemsWithEnumerator:(NSEnumerator *)arg2 enumerator:(SPTTouchViewPreview * (^)(id, char *))arg3;
- (void)registerContextTableViewCell:(UIView *)arg1 byEnumeratingItemsInArray:(NSArray *)arg2 enumerator:(SPTTouchViewPreview * (^)(id, char *))arg3;
- (void)registerContextTableViewCell:(UIView *)arg1 withSpotifyURL:(NSURL *)arg2 resolverServiceName:(NSString *)arg3 resolverServicePathComponents:(NSArray *)arg4;
- (void)registerContextTableViewCell:(UIView *)arg1 withSpotifyURL:(NSURL *)arg2;
- (void)registerSingleTrackCell:(UIView *)arg1 withSpotifyURL:(NSURL *)arg2;
- (void)registerSingleTrackCell:(UIView *)arg1 withPreviewURL:(NSURL *)arg2;
@end

