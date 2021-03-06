//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "SPTCeramicRequest.h"

@class NSDate, NSDictionary, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLComponents, NSURLConnection, SPTRequest, SPTResponse;

@interface SPTBrowseRequest : NSObject <NSURLConnectionDataDelegate, SPTCeramicRequest>
{
    BOOL _shouldParseInBackground;
    BOOL _loaded;
    BOOL _connectionFinishLoading;
    BOOL _expirationDateOnResponseData;
    BOOL _shouldEnforceCache;
    id <SPTCeramicSpace> _space;
    NSURLComponents *_URLComponents;
    id <SPTCeramicRequestDelegate> _ceramicDelegate;
    NSDictionary *_responseDictionary;
    NSString *_countryCode;
    unsigned int _numberOfItemsPerPage;
    NSString *_path;
    SPTRequest *_hermesRequest;
    id <SPTResolver> _hermesResolver;
    SPTResponse *_hermesResponse;
    NSURL *_URI;
    NSHTTPURLResponse *_response;
    NSMutableData *_responseData;
    NSURLConnection *_currentConnection;
    NSDate *_fetchDate;
    double _cacheExpirationInterval;
}

+ (id)browseBackendResolver;
+ (void)setBrowseBackendHermesResolver:(id)arg1;
+ (id)browseBackendFormattedStringFromDate:(id)arg1;
+ (id)browseBackendFormattedStringForCountryCode:(id)arg1;
+ (id)browseBackendFormattedStringForInterfaceIdiom:(int)arg1;
+ (id)browseBackendFormattedStringForAppVersion:(id)arg1;
+ (id)browseBackendFormattedStringForProduct:(id)arg1;
+ (id)browseBackendFormattedStringForLocale:(id)arg1;
@property(retain, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property(retain, nonatomic) NSURLConnection *currentConnection; // @synthesize currentConnection=_currentConnection;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) SPTResponse *hermesResponse; // @synthesize hermesResponse=_hermesResponse;
@property(retain, nonatomic) id <SPTResolver> hermesResolver; // @synthesize hermesResolver=_hermesResolver;
@property(retain, nonatomic) SPTRequest *hermesRequest; // @synthesize hermesRequest=_hermesRequest;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned int numberOfItemsPerPage; // @synthesize numberOfItemsPerPage=_numberOfItemsPerPage;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(nonatomic) double cacheExpirationInterval; // @synthesize cacheExpirationInterval=_cacheExpirationInterval;
@property(nonatomic) BOOL shouldEnforceCache; // @synthesize shouldEnforceCache=_shouldEnforceCache;
@property(nonatomic, getter=hasExpirationDateOnResponseData) BOOL expirationDateOnResponseData; // @synthesize expirationDateOnResponseData=_expirationDateOnResponseData;
@property(nonatomic, getter=didConnectionFinishLoading) BOOL connectionFinishLoading; // @synthesize connectionFinishLoading=_connectionFinishLoading;
@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(nonatomic) __weak id <SPTCeramicRequestDelegate> ceramicDelegate; // @synthesize ceramicDelegate=_ceramicDelegate;
@property(readonly, nonatomic) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
@property(readonly, nonatomic) BOOL shouldParseInBackground; // @synthesize shouldParseInBackground=_shouldParseInBackground;
@property(readonly, nonatomic) id <SPTCeramicSpace> space; // @synthesize space=_space;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)notifyDelegateOfSuccess;
- (void)notifyDelegateOfError:(id)arg1;
- (void)parseResponseDictionary;
- (void)dispatchParse;
- (void)serializeResponseData:(id)arg1;
- (void)cancelCurrentConnection;
- (void)load;
@property(readonly, nonatomic) BOOL shouldReloadWhenOnlineStateChanges;
- (void)dealloc;
- (id)queryParametersWithDate:(id)arg1 countryCode:(id)arg2 itemsPerPage:(unsigned int)arg3;
- (void)setupPropertiesWithOptions:(unsigned int)arg1;
- (id)initWithPath:(id)arg1 countryCode:(id)arg2 options:(unsigned int)arg3;
- (id)initWithCountryCode:(id)arg1;
- (id)init;
- (id)browseBackendBaseDomain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

