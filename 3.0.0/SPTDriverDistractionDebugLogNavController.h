//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "SPTDriverDistractionDebugLoggerConsumer.h"

@class SPTDriverDistractionDebugLogDataSource, SPTDriverDistractionDebugLogDelegate, UITableViewController;

@interface SPTDriverDistractionDebugLogNavController : UINavigationController <SPTDriverDistractionDebugLoggerConsumer>
{
    SPTDriverDistractionDebugLogDataSource *_tvcDataSource;
    SPTDriverDistractionDebugLogDelegate *_tvcDelegate;
    UITableViewController *_rvc;
}

@property(retain, nonatomic) UITableViewController *rvc; // @synthesize rvc=_rvc;
@property(retain) SPTDriverDistractionDebugLogDelegate *tvcDelegate; // @synthesize tvcDelegate=_tvcDelegate;
@property(retain) SPTDriverDistractionDebugLogDataSource *tvcDataSource; // @synthesize tvcDataSource=_tvcDataSource;
- (void).cxx_destruct;
- (void)reset;
- (void)newEntriesWaiting:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addClearButtonToViewController:(id)arg1;
- (void)addCloseButtonToViewController:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)clearButtonPressed:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

@end

