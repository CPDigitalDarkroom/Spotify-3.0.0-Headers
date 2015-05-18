//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTImageLoaderService, SPTWebTokenController;

@interface SPTExternalLinkPreviewController : NSObject
{
    SPTImageLoaderService *_imageLoaderService;
    SPTWebTokenController *_tokenController;
}

@property(retain, nonatomic) SPTWebTokenController *tokenController; // @synthesize tokenController=_tokenController;
@property(retain, nonatomic) SPTImageLoaderService *imageLoaderService; // @synthesize imageLoaderService=_imageLoaderService;
- (void).cxx_destruct;
- (BOOL)handleURL:(id)arg1;
- (BOOL)canHandleURL:(id)arg1;
- (id)initWithImageLoaderService:(id)arg1;

@end

