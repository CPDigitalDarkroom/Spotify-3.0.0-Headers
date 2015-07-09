//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, UIImage;

@interface SPTPartyGenre : NSObject
{
    NSString *_name;
    NSString *_key;
    NSArray *_childrenGenres;
    NSURL *_imageURL;
    UIImage *_image;
    SPTPartyGenre *_parentGenre;
}

@property(nonatomic) __weak SPTPartyGenre *parentGenre; // @synthesize parentGenre=_parentGenre;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSArray *childrenGenres; // @synthesize childrenGenres=_childrenGenres;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)indexForSubgenre:(id)arg1;
@property(readonly, nonatomic) NSArray *childrenGenreNames;
- (id)initWithDictionary:(id)arg1;

@end

