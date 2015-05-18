//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDWidget.h"

@class IDModel, IDView, NSArray, NSMutableString, NSString;

@interface IDSpeller : IDWidget
{
    BOOL _searchStringDirty;
    BOOL _resultsDirty;
    BOOL _targetHmiStateIdDirty;
    BOOL _suggestTargetHmiStateIdDirty;
    id <IDSpellerDelegate> _delegate;
    NSArray *_results;
    IDView *_targetView;
    IDView *_suggestTargetView;
    int _actionId;
    int _resultActionId;
    IDModel *_resultModel;
    int _suggestActionId;
    IDModel *_suggestModel;
    IDModel *_targetModel;
    IDModel *_suggestTargetModel;
    int _targetHmiStateId;
    int _suggestTargetHmiStateId;
    NSMutableString *_searchString;
}

@property(nonatomic) BOOL suggestTargetHmiStateIdDirty; // @synthesize suggestTargetHmiStateIdDirty=_suggestTargetHmiStateIdDirty;
@property(nonatomic) BOOL targetHmiStateIdDirty; // @synthesize targetHmiStateIdDirty=_targetHmiStateIdDirty;
@property(nonatomic) BOOL resultsDirty; // @synthesize resultsDirty=_resultsDirty;
@property(nonatomic) BOOL searchStringDirty; // @synthesize searchStringDirty=_searchStringDirty;
@property(retain, nonatomic) NSMutableString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) int suggestTargetHmiStateId; // @synthesize suggestTargetHmiStateId=_suggestTargetHmiStateId;
@property(nonatomic) int targetHmiStateId; // @synthesize targetHmiStateId=_targetHmiStateId;
@property(retain, nonatomic) IDModel *suggestTargetModel; // @synthesize suggestTargetModel=_suggestTargetModel;
@property(retain, nonatomic) IDModel *targetModel; // @synthesize targetModel=_targetModel;
@property(retain, nonatomic) IDModel *suggestModel; // @synthesize suggestModel=_suggestModel;
@property(nonatomic) int suggestActionId; // @synthesize suggestActionId=_suggestActionId;
@property(retain, nonatomic) IDModel *resultModel; // @synthesize resultModel=_resultModel;
@property(nonatomic) int resultActionId; // @synthesize resultActionId=_resultActionId;
@property(nonatomic) int actionId; // @synthesize actionId=_actionId;
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
@property(readonly, nonatomic) unsigned int type;
@property(readonly, copy, nonatomic) NSString *text;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithWidgetId:(int)arg1;
- (id)initWithWidgetId:(int)arg1 actionId:(int)arg2 resultActionId:(int)arg3 resultModel:(id)arg4 suggestActionId:(int)arg5 suggestModel:(id)arg6 targetModel:(id)arg7 suggestTargetModel:(id)arg8;
- (id)initWithWidgetId:(int)arg1 actionId:(int)arg2 resultActionId:(int)arg3 resultModel:(id)arg4 suggestActionId:(int)arg5 suggestModel:(id)arg6 targetModel:(id)arg7;
- (id)initWithActionId:(int)arg1 resultActionId:(int)arg2 resultModel:(id)arg3 suggestActionId:(int)arg4 suggestModel:(id)arg5 targetModel:(id)arg6;

@end
