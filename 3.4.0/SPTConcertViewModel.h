//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDate, NSString, NSURL;

@interface SPTConcertViewModel : NSObject
{
    NSString *_locationTitle;
    NSString *_locationSubtitle;
    CLLocation *_concertLocation;
    NSURL *_artistURI;
    NSString *_artistName;
    NSURL *_artistPortraitURL;
    NSString *_concertInfoTitle;
    NSURL *_viewURI;
    NSDate *_concertDate;
    NSString *_concertInfoSubtitle;
    id <SPTConcert> _concertModel;
}

+ (id)subtitleStringWithConcert:(id)arg1;
@property(readonly, nonatomic) id <SPTConcert> concertModel; // @synthesize concertModel=_concertModel;
@property(readonly, copy, nonatomic) NSString *concertInfoSubtitle; // @synthesize concertInfoSubtitle=_concertInfoSubtitle;
@property(readonly, nonatomic) NSDate *concertDate; // @synthesize concertDate=_concertDate;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, copy, nonatomic) NSString *concertInfoTitle; // @synthesize concertInfoTitle=_concertInfoTitle;
@property(readonly, nonatomic) NSURL *artistPortraitURL; // @synthesize artistPortraitURL=_artistPortraitURL;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSURL *artistURI; // @synthesize artistURI=_artistURI;
@property(readonly, nonatomic) CLLocation *concertLocation; // @synthesize concertLocation=_concertLocation;
@property(readonly, copy, nonatomic) NSString *locationSubtitle; // @synthesize locationSubtitle=_locationSubtitle;
@property(readonly, copy, nonatomic) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;
- (void).cxx_destruct;
- (void)openPartnerWebsiteURL;
- (void)openArtistPage;
- (id)initWithMockData;
- (id)initWithConcert:(id)arg1 artist:(id)arg2;

@end
