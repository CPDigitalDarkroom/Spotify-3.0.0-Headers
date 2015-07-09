//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTDNSChooserViewController.h"

#import "SPAPResovlerDelegate.h"

@class NSArray, NSMutableArray, SPAPResovler;

@interface SPAPChooserViewController : SPTDNSChooserViewController <SPAPResovlerDelegate>
{
    NSMutableArray *_listOfAPs;
    NSArray *_testingEnvAps;
    SPAPResovler *_apResolver;
    NSMutableArray *_apResolverAps;
}

+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)currentHostSelected;
- (id)hostsForSection:(long long)arg1;
- (void)apResovler:(id)arg1 entries:(id)arg2;
- (id)init;

@end
