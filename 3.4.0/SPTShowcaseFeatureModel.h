//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SPTShowcaseFeatureModel : NSObject
{
    _Bool _dynamic;
    _Bool _imageMasked;
    NSString *_icon;
    NSString *_featureID;
    NSString *_imageName;
    NSArray *_animationImages;
}

@property(readonly, nonatomic, getter=isImageMasked) _Bool imageMasked; // @synthesize imageMasked=_imageMasked;
@property(nonatomic, getter=isDynamic) _Bool dynamic; // @synthesize dynamic=_dynamic;
@property(retain, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

