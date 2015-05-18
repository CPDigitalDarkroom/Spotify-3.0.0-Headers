//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDButton.h"

@class IDModel, NSString;

@interface IDFilterButton : IDButton
{
    BOOL _tooltipTextDirty;
    BOOL _tooltipTextIdDirty;
    NSString *_tooltipText;
    int _tooltipTextId;
    IDModel *_tooltipTextModel;
}

@property(nonatomic) BOOL tooltipTextIdDirty; // @synthesize tooltipTextIdDirty=_tooltipTextIdDirty;
@property(nonatomic) BOOL tooltipTextDirty; // @synthesize tooltipTextDirty=_tooltipTextDirty;
@property(readonly, nonatomic) IDModel *tooltipTextModel; // @synthesize tooltipTextModel=_tooltipTextModel;
@property(nonatomic) int tooltipTextId; // @synthesize tooltipTextId=_tooltipTextId;
@property(copy, nonatomic) NSString *tooltipText; // @synthesize tooltipText=_tooltipText;
- (void).cxx_destruct;
- (void)flush:(int)arg1;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithWidgetId:(int)arg1 textModel:(id)arg2 imageModel:(id)arg3 targetModel:(id)arg4 actionId:(int)arg5 focusId:(int)arg6;
- (id)initWithWidgetId:(int)arg1 model:(id)arg2 tooltipModel:(id)arg3 imageModel:(id)arg4 targetModel:(id)arg5 actionId:(int)arg6 focusId:(int)arg7;
- (id)initWithWidgetId:(int)arg1 textModel:(id)arg2 tooltipModel:(id)arg3 imageModel:(id)arg4 targetModel:(id)arg5 actionId:(int)arg6 focusId:(int)arg7;

@end
