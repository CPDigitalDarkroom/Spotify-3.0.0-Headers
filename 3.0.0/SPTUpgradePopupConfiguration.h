//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface SPTUpgradePopupConfiguration : NSObject
{
    BOOL _primaryButtonHidden;
    BOOL _secondaryButtonHidden;
    NSString *_headerText;
    NSString *_titleText;
    NSString *_detailText;
    UIImage *_popupImage;
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
    CDUnknownBlockType _primaryActionBlock;
}

+ (id)modernOSLegacyAppRemovablePopupConfiguration;
+ (id)modernOSModernAppAvailablePopupConfiguration;
+ (id)modernOSLegacyAppInstalledPopupConfiguration;
+ (id)legacyOSLegacyAppInstalledPopupConfiguration;
@property(readonly, nonatomic) CDUnknownBlockType primaryActionBlock; // @synthesize primaryActionBlock=_primaryActionBlock;
@property(nonatomic) BOOL secondaryButtonHidden; // @synthesize secondaryButtonHidden=_secondaryButtonHidden;
@property(nonatomic) BOOL primaryButtonHidden; // @synthesize primaryButtonHidden=_primaryButtonHidden;
@property(retain, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(retain, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property(retain, nonatomic) UIImage *popupImage; // @synthesize popupImage=_popupImage;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;

@end
