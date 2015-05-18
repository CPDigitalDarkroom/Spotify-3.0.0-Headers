//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTHTTPTestManager.h"
#import "SPTLocalSettingsObserver.h"
#import "SPTProductStateObserver.h"

@class NSMapTable, NSNumber, NSString;

@interface SPTHTTPTestManagerImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTProductStateObserver, SPTLocalSettingsObserver, SPTHTTPTestManager>
{
    BOOL _anyHTTPTestOn;
    int _activityTestValue;
    int _recommendationsTestValue;
    int _shareTestValue;
    int _albumTestValue;
    int _artistTestValue;
    int _audiotouchTestValue;
    int _buddyListTestValue;
    int _collectionTestValue;
    int _employeeFeedbackTestValue;
    int _followTestValue;
    int _IAPTestValue;
    int _profileTestValue;
    int _radioTestValue;
    int _searchTestValue;
    int _socialChartTestValue;
    int _startPageTestValue;
    int _abbaTestValue;
    int _genreTestValue;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    NSMapTable *_observers;
    NSNumber *_lastLocalSettingValue;
}

+ (id)httpTestManagerImplementationWithAbbaFeatureFlags:(id)arg1 productState:(id)arg2 localSettings:(id)arg3;
@property(retain, nonatomic) NSNumber *lastLocalSettingValue; // @synthesize lastLocalSettingValue=_lastLocalSettingValue;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) int genreTestValue; // @synthesize genreTestValue=_genreTestValue;
@property(nonatomic) int abbaTestValue; // @synthesize abbaTestValue=_abbaTestValue;
@property(nonatomic, getter=isAnyHTTPTestOn) BOOL anyHTTPTestOn; // @synthesize anyHTTPTestOn=_anyHTTPTestOn;
@property(nonatomic) int startPageTestValue; // @synthesize startPageTestValue=_startPageTestValue;
@property(nonatomic) int socialChartTestValue; // @synthesize socialChartTestValue=_socialChartTestValue;
@property(nonatomic) int searchTestValue; // @synthesize searchTestValue=_searchTestValue;
@property(nonatomic) int radioTestValue; // @synthesize radioTestValue=_radioTestValue;
@property(nonatomic) int profileTestValue; // @synthesize profileTestValue=_profileTestValue;
@property(nonatomic) int IAPTestValue; // @synthesize IAPTestValue=_IAPTestValue;
@property(nonatomic) int followTestValue; // @synthesize followTestValue=_followTestValue;
@property(nonatomic) int employeeFeedbackTestValue; // @synthesize employeeFeedbackTestValue=_employeeFeedbackTestValue;
@property(nonatomic) int collectionTestValue; // @synthesize collectionTestValue=_collectionTestValue;
@property(nonatomic) int buddyListTestValue; // @synthesize buddyListTestValue=_buddyListTestValue;
@property(nonatomic) int audiotouchTestValue; // @synthesize audiotouchTestValue=_audiotouchTestValue;
@property(nonatomic) int artistTestValue; // @synthesize artistTestValue=_artistTestValue;
@property(nonatomic) int albumTestValue; // @synthesize albumTestValue=_albumTestValue;
@property(nonatomic) int shareTestValue; // @synthesize shareTestValue=_shareTestValue;
@property(nonatomic) int recommendationsTestValue; // @synthesize recommendationsTestValue=_recommendationsTestValue;
@property(nonatomic) int activityTestValue; // @synthesize activityTestValue=_activityTestValue;
- (void).cxx_destruct;
- (void)localSettingsDidChange:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)featureFlagsDidChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (int)testValueForFeatureIdentifier:(id)arg1;
- (void)fillInFeatureFlags;
- (id)featureFlagForFeatureIdentifier:(id)arg1;
- (id)currentFeatureFlags;
- (int)testValueForFeatureFlag:(id)arg1;
- (id)initWithAbbaFeatureFlags:(id)arg1 productState:(id)arg2 localSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
