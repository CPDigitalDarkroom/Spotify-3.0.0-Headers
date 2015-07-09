//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTFeatureSettingsItem : NSObject
{
    _Bool _hasOverride;
    _Bool _requiresRestartWhenChanged;
    _Bool _hasChangeRequiringRestart;
    NSString *_title;
    NSString *_label;
    id _value;
    id _defaultValue;
    NSString *_itemDescription;
    CDUnknownBlockType _resetAction;
    id <SPTFeatureSettingsUIProvider> _UIProvider;
}

+ (id)keyPathsForValuesAffectingRequiresRestart;
+ (id)itemWithLabel:(id)arg1 description:(id)arg2 UIProvider:(id)arg3;
+ (id)groupItemWithTitle:(id)arg1 description:(id)arg2 items:(id)arg3 presentAsSubPage:(_Bool)arg4;
+ (id)subPageItemWithLabel:(id)arg1 description:(id)arg2 factory:(CDUnknownBlockType)arg3;
+ (id)actionItemWithLabel:(id)arg1 description:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)multipleChoiceItemWithLabel:(id)arg1 description:(id)arg2 choices:(id)arg3 initialState:(id)arg4 action:(CDUnknownBlockType)arg5;
+ (id)switchItemWithLabel:(id)arg1 description:(id)arg2 initialState:(_Bool)arg3 action:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) id <SPTFeatureSettingsUIProvider> UIProvider; // @synthesize UIProvider=_UIProvider;
@property(copy, nonatomic) CDUnknownBlockType resetAction; // @synthesize resetAction=_resetAction;
@property(nonatomic) _Bool hasChangeRequiringRestart; // @synthesize hasChangeRequiringRestart=_hasChangeRequiringRestart;
@property(nonatomic) _Bool requiresRestartWhenChanged; // @synthesize requiresRestartWhenChanged=_requiresRestartWhenChanged;
@property(readonly, copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(nonatomic) _Bool hasOverride; // @synthesize hasOverride=_hasOverride;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool requiresRestart;
- (void)reset;
- (id)initWithLabel:(id)arg1 description:(id)arg2 UIProvider:(id)arg3;

@end

