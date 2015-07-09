//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTFeedbackResponseItem : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_body;
    NSURL *_imageURL;
    NSString *_secondaryTitle;
    NSString *_secondarySubtitle;
    NSString *_messageBody;
    NSString *_actionButtonTitle;
    NSString *_cancelButtonTitle;
}

@property(readonly, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(readonly, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(readonly, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(readonly, nonatomic) NSString *secondarySubtitle; // @synthesize secondarySubtitle=_secondarySubtitle;
@property(readonly, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

