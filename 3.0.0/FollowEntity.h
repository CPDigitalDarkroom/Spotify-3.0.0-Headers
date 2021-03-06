//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FollowData, NSString, NSURL, UIImage;

@interface FollowEntity : NSObject
{
    NSString *_name;
    NSURL *_uri;
    NSURL *_imageURL;
    UIImage *_image;
    FollowData *_followData;
}

+ (id)urlForDictionary:(id)arg1 forKeyInPrioritizedKeyArray:(id)arg2;
+ (BOOL)shouldGetLargeImages;
@property(retain, nonatomic) FollowData *followData; // @synthesize followData=_followData;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

