//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface SPTBrowseOverviewHeaderShortcutHolder : NSObject
{
    BOOL _shouldDisplayNewTag;
    NSString *_title;
    UIImage *_image;
    id _target;
    SEL _action;
}

@property(nonatomic) BOOL shouldDisplayNewTag; // @synthesize shouldDisplayNewTag=_shouldDisplayNewTag;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)invoke;

@end

