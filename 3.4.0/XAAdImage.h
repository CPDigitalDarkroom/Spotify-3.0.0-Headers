//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAAdResource.h"

@class UIImage;

@interface XAAdImage : XAAdResource
{
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loaded;
- (_Bool)ready;
- (_Bool)imageExist;
- (void)onDataLoaded;
- (id)initWithImage:(id)arg1;
- (id)initWithURLString:(id)arg1;

@end

