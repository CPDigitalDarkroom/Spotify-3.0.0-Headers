//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSNumber, NSString;

@interface SWGInitializeUser : SWGObject
{
    NSString *_state;
    NSString *_country;
    NSString *_streetAddress;
    NSNumber *_children;
    NSString *_homePhone;
    NSString *_mobilePhone;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_birthDate;
    NSString *_email;
    NSString *_gender;
    NSString *_maritalStatus;
    NSString *_education;
    NSString *_ethnicity;
    NSString *_politics;
    NSString *_keywords;
    NSString *_zipCode;
    NSString *_city;
}

@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *zipCode; // @synthesize zipCode=_zipCode;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *politics; // @synthesize politics=_politics;
@property(retain, nonatomic) NSString *ethnicity; // @synthesize ethnicity=_ethnicity;
@property(retain, nonatomic) NSString *education; // @synthesize education=_education;
@property(retain, nonatomic) NSString *maritalStatus; // @synthesize maritalStatus=_maritalStatus;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(retain, nonatomic) NSString *homePhone; // @synthesize homePhone=_homePhone;
@property(retain, nonatomic) NSNumber *children; // @synthesize children=_children;
@property(retain, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithValues:(id)arg1;
- (id)state:(id)arg1 country:(id)arg2 streetAddress:(id)arg3 children:(id)arg4 homePhone:(id)arg5 mobilePhone:(id)arg6 firstName:(id)arg7 lastName:(id)arg8 birthDate:(id)arg9 email:(id)arg10 gender:(id)arg11 maritalStatus:(id)arg12 education:(id)arg13 ethnicity:(id)arg14 politics:(id)arg15 keywords:(id)arg16 zipCode:(id)arg17 city:(id)arg18;

@end

