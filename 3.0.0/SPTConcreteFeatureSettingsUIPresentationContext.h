//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureSettingsUIPresentationContext.h"

@class NSString, SPTFeatureSettingsItem, UINavigationController, UITableView;

@interface SPTConcreteFeatureSettingsUIPresentationContext : NSObject <SPTFeatureSettingsUIPresentationContext>
{
    SPTFeatureSettingsItem *_item;
    UINavigationController *_navigationController;
    UITableView *_tableView;
}

@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SPTFeatureSettingsItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)reloadData;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)initWithFeatureSettingsItem:(id)arg1 tableView:(id)arg2 navigationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
