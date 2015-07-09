//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor, UIImage;

@protocol SPTExternalContentItem <NSObject>
@property(readonly, nonatomic) unsigned long long childStructureHint;
@property(readonly, copy, nonatomic) NSArray *children;
@property(readonly, copy, nonatomic) NSArray *headers;
@property(readonly, nonatomic) id <SPTExternalContentItem> parent;
@property(readonly, nonatomic) _Bool shouldPlayParent;
@property(readonly, nonatomic) _Bool isItemContainer;
@property(readonly, nonatomic) _Bool playable;
@property(readonly, copy, nonatomic) NSString *URI;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)updateChildren:(void (^)(id <SPTExternalContentItem>, NSArray *))arg1;
- (UIImage *)generateImageWithSize:(struct CGSize)arg1 foregroundColor:(UIColor *)arg2 backgroundColor:(UIColor *)arg3;
- (void)removeChildrenChangedSubscriptionBlock:(void (^)(id <SPTExternalContentItem>, NSArray *))arg1;
- (void)subscribeToChildrenChangedWithBlock:(void (^)(id <SPTExternalContentItem>, NSArray *))arg1;
- (void)removeItemChangedSubscriptionBlock:(void (^)(id <SPTExternalContentItem>))arg1;
- (void)subscribeToItemChangedWithBlock:(void (^)(id <SPTExternalContentItem>))arg1;
@end

