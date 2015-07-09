//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPSocialDecorationData : NSObject
{
    _Bool _subscribed;
    NSString *_canonicalUsername;
    NSString *_displayName;
    NSString *_image;
    NSString *_imageLarge;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_facebookUID;
}

@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString *facebookUID; // @synthesize facebookUID=_facebookUID;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *imageLarge; // @synthesize imageLarge=_imageLarge;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *canonicalUsername; // @synthesize canonicalUsername=_canonicalUsername;
- (void).cxx_destruct;
- (id)initWithCanonicalUsername:(id)arg1 displayName:(id)arg2 image:(id)arg3 imageLarge:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 fbUID:(id)arg7 subscribed:(_Bool)arg8;

@end
