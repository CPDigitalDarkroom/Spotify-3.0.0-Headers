//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBURLConnection, NSString, UIImageView;

@interface FBProfilePictureView : UIView
{
    NSString *_profileID;
    int _pictureCropping;
    FBURLConnection *_connection;
    UIImageView *_imageView;
    NSString *_previousImageQueryParamString;
}

@property(retain, nonatomic) NSString *previousImageQueryParamString; // @synthesize previousImageQueryParamString=_previousImageQueryParamString;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FBURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pictureCropping; // @synthesize pictureCropping=_pictureCropping;
@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)ensureImageViewContentMode;
- (void)refreshImage:(BOOL)arg1;
- (void)initialize;
@property(readonly, nonatomic) NSString *imageQueryParamString;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithProfileID:(id)arg1 pictureCropping:(int)arg2;
- (id)init;
- (void)dealloc;

@end

