//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSHashTable, NSString;

@interface FBTweak : NSObject <NSCoding>
{
    NSHashTable *_observers;
    NSString *_identifier;
    NSString *_name;
    id _defaultValue;
    id _currentValue;
    id _minimumValue;
    id _maximumValue;
    id _stepValue;
    id _precisionValue;
}

@property(retain, nonatomic) id precisionValue; // @synthesize precisionValue=_precisionValue;
@property(retain, nonatomic) id stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) id maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) id minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) id currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isAction) _Bool action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

