//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDataLoaderFactory;

@interface SPTFeedbackRequestFactory : NSObject
{
    SPTDataLoaderFactory *_dataLoaderFactory;
}

@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)createRequest;
- (id)initWithDataLoaderFactory:(id)arg1;

@end
