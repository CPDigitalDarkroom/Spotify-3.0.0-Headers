//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTActivityUser : NSObject
{
    BOOL _isFollowing;
    NSString *_name;
    NSURL *_uri;
    NSURL *_imageURL;
    unsigned int _followerCount;
    id <SPTImageLoaderRequest> _imageLoaderRequest;
}

@property(nonatomic) __weak id <SPTImageLoaderRequest> imageLoaderRequest; // @synthesize imageLoaderRequest=_imageLoaderRequest;
@property(readonly, nonatomic) BOOL isFollowing; // @synthesize isFollowing=_isFollowing;
@property(readonly, nonatomic) unsigned int followerCount; // @synthesize followerCount=_followerCount;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
