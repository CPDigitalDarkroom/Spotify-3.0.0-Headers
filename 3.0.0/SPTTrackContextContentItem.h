//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTContentItemChangeNotificationImplementation.h"

@class NSArray, SPTrackContext;

@interface SPTTrackContextContentItem : SPTContentItemChangeNotificationImplementation
{
    BOOL _kvoInstalled;
    NSArray *children;
    NSArray *headers;
    SPTrackContext *_trackContext;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
}

@property(nonatomic) BOOL kvoInstalled; // @synthesize kvoInstalled=_kvoInstalled;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTrackContext *trackContext; // @synthesize trackContext=_trackContext;
@property(copy, nonatomic) NSArray *headers; // @synthesize headers;
@property(copy, nonatomic) NSArray *children; // @synthesize children;
- (void).cxx_destruct;
- (void)updateChildren:(CDUnknownBlockType)arg1;
- (void)updateChildren;
- (unsigned int)childStructureHint;
- (BOOL)shouldPlayParent;
- (BOOL)isItemContainer;
- (BOOL)playable;
- (id)identifier;
- (id)subTitle;
- (id)title;
- (id)generateImageWithSize:(struct CGSize)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithTrackContext:(id)arg1 imageLoaderFactory:(id)arg2;

@end

