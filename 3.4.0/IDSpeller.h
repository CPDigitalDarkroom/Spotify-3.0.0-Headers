//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDWidget.h"

@class IDModel, IDView, NSArray, NSMutableString, NSString;

@interface IDSpeller : IDWidget
{
    _Bool _searchStringDirty;
    _Bool _resultsDirty;
    _Bool _targetHmiStateIdDirty;
    _Bool _suggestTargetHmiStateIdDirty;
    id <IDSpellerDelegate> _delegate;
    NSArray *_results;
    IDView *_targetView;
    IDView *_suggestTargetView;
    long long _actionId;
    long long _resultActionId;
    IDModel *_resultModel;
    long long _suggestActionId;
    IDModel *_suggestModel;
    IDModel *_targetModel;
    IDModel *_suggestTargetModel;
    long long _targetHmiStateId;
    long long _suggestTargetHmiStateId;
    NSMutableString *_searchString;
}

@property(nonatomic) _Bool suggestTargetHmiStateIdDirty; // @synthesize suggestTargetHmiStateIdDirty=_suggestTargetHmiStateIdDirty;
@property(nonatomic) _Bool targetHmiStateIdDirty; // @synthesize targetHmiStateIdDirty=_targetHmiStateIdDirty;
@property(nonatomic) _Bool resultsDirty; // @synthesize resultsDirty=_resultsDirty;
@property(nonatomic) _Bool searchStringDirty; // @synthesize searchStringDirty=_searchStringDirty;
@property(retain, nonatomic) NSMutableString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) long long suggestTargetHmiStateId; // @synthesize suggestTargetHmiStateId=_suggestTargetHmiStateId;
@property(nonatomic) long long targetHmiStateId; // @synthesize targetHmiStateId=_targetHmiStateId;
@property(retain, nonatomic) IDModel *suggestTargetModel; // @synthesize suggestTargetModel=_suggestTargetModel;
@property(retain, nonatomic) IDModel *targetModel; // @synthesize targetModel=_targetModel;
@property(retain, nonatomic) IDModel *suggestModel; // @synthesize suggestModel=_suggestModel;
@property(nonatomic) long long suggestActionId; // @synthesize suggestActionId=_suggestActionId;
@property(retain, nonatomic) IDModel *resultModel; // @synthesize resultModel=_resultModel;
@property(nonatomic) long long resultActionId; // @synthesize resultActionId=_resultActionId;
@property(nonatomic) long long actionId; // @synthesize actionId=_actionId;
@property(nonatomic) __weak IDView *suggestTargetView; // @synthesize suggestTargetView=_suggestTargetView;
@property(nonatomic) __weak IDView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak id <IDSpellerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)flush:(int)arg1;
- (void)flushSuggestTarget;
- (void)flushTarget;
- (void)clear;
- (void)rowSelected:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)deleteAll;
- (void)deleteLetter;
- (void)appendLetter:(id)arg1;
- (void)anotherLetter:(id)arg1;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, copy, nonatomic) NSString *text;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithWidgetId:(long long)arg1;
- (id)initWithWidgetId:(long long)arg1 actionId:(long long)arg2 resultActionId:(long long)arg3 resultModel:(id)arg4 suggestActionId:(long long)arg5 suggestModel:(id)arg6 targetModel:(id)arg7 suggestTargetModel:(id)arg8;
- (id)initWithWidgetId:(long long)arg1 actionId:(long long)arg2 resultActionId:(long long)arg3 resultModel:(id)arg4 suggestActionId:(long long)arg5 suggestModel:(id)arg6 targetModel:(id)arg7;
- (id)initWithActionId:(long long)arg1 resultActionId:(long long)arg2 resultModel:(id)arg3 suggestActionId:(long long)arg4 suggestModel:(id)arg5 targetModel:(id)arg6;

@end
