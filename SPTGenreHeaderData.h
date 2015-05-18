//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTGenreHeaderData : NSObject
{
    BOOL _alwaysCollapsed;
    NSString *_title;
    NSString *_descriptionText;
    NSURL *_imageURL;
    unsigned int _buttonIcon;
    NSString *_buttonTitle;
    NSURL *_buttonPlaybackURL;
}

@property(readonly, nonatomic) NSURL *buttonPlaybackURL; // @synthesize buttonPlaybackURL=_buttonPlaybackURL;
@property(readonly, copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(readonly, nonatomic) unsigned int buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) BOOL alwaysCollapsed; // @synthesize alwaysCollapsed=_alwaysCollapsed;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

