//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTUpsellPagingModelDataLoader : NSObject
{
}

+ (id)createPageForContext:(id)arg1 localizedHeading:(id)arg2 localizedTitle:(id)arg3 localizedSubtitle:(id)arg4 iconName:(id)arg5 locale:(id)arg6;
+ (id)createExtremeQualityPageForLocale:(id)arg1;
+ (id)createAdPageForLocale:(id)arg1;
+ (id)createOfflinePlaybackPageForLocale:(id)arg1;
+ (id)createWithoutLimitsPageForLocale:(id)arg1;
+ (id)createShuffleChangedPageForLocale:(id)arg1;
- (id)loadViewModelWithDictionary:(id)arg1;
- (id)provideContentDictionaryForContext:(id)arg1;
- (id)loadViewModelForContext:(id)arg1;

@end
