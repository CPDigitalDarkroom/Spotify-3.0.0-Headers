//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAdsViewModel.h"

#import "SPVASTRequestDelegate.h"

@class NSDate, NSString, SPTAdsActivityLogger, SPTAdsLasertag, SPVASTRequest;

@interface SPTAdsVASTViewModel : SPTAdsViewModel <SPVASTRequestDelegate>
{
    SPTAdsLasertag *_lasertag;
    SPVASTRequest *_vastRequest;
    NSDate *_lastDFPRequest;
    SPTAdsActivityLogger *_adsActivityLogger;
}

@property(nonatomic) __weak SPTAdsActivityLogger *adsActivityLogger; // @synthesize adsActivityLogger=_adsActivityLogger;
@property(retain, nonatomic) NSDate *lastDFPRequest; // @synthesize lastDFPRequest=_lastDFPRequest;
@property(retain, nonatomic) SPVASTRequest *vastRequest; // @synthesize vastRequest=_vastRequest;
@property(retain, nonatomic) SPTAdsLasertag *lasertag; // @synthesize lasertag=_lasertag;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didFinishLoadingResponse:(id)arg2;
- (BOOL)parseAd:(id)arg1 withType:(unsigned int)arg2;
- (void)fetchAdWithURL:(id)arg1;
- (void)updateLastDFPRequestTime;
- (id)getLastDFPRequestTime;
- (BOOL)canMakeNewDFPRequest;
- (BOOL)canRequestAd;
- (void)clearRequest;
- (void)finishAd;
- (BOOL)requestAd;
- (BOOL)hasVideoAd;
- (BOOL)preparedToPlay;
- (void)reset;
- (id)initWithResolver:(id)arg1 adController:(id)arg2 player:(id)arg3 audioSession:(id)arg4 audioDriverController:(id)arg5 offlineModeState:(id)arg6 imageLoader:(id)arg7 hlsResourceLoaderFactory:(id)arg8 cosmosSettingsController:(id)arg9 adsActivityLogger:(id)arg10 adEventLogger:(id)arg11 prerollEnabled:(BOOL)arg12 prerollReRequest:(BOOL)arg13 cosmosMidrollEnabled:(BOOL)arg14 hlsVideoDisabled:(BOOL)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

