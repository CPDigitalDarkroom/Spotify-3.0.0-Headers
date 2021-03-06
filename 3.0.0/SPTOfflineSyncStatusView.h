//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView;

@interface SPTOfflineSyncStatusView : UIView
{
    BOOL _requiresIconUpdate;
    unsigned int _status;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicator;
}

+ (id)accessibilityLabelForStatus:(unsigned int)arg1;
+ (id)offlineSyncStatusView;
@property(nonatomic) BOOL requiresIconUpdate; // @synthesize requiresIconUpdate=_requiresIconUpdate;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;

@end

