//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@protocol SPTDebugAction <NSObject>
@property(nonatomic) _Bool featureRegistered;
@property(nonatomic) long long category;
@property(nonatomic) unsigned long long weight;
@property(readonly, nonatomic) _Bool showDisclosureArrow;
@property(retain, nonatomic) NSString *actionDescription;
- (_Bool)performActionWithEmbeddingViewController:(UIViewController *)arg1;
@end
