//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSURL, UITableViewCell;

@interface SPTActivityImageLoadingContext : NSObject
{
    UITableViewCell *_cell;
    NSIndexPath *_indexPath;
    NSURL *_imageURL;
    long long _imageType;
}

+ (_Bool)indexPathIsValid:(id)arg1 withCell:(id)arg2 forTableView:(id)arg3;
+ (id)imageLoadingContextWithCell:(id)arg1 indexPath:(id)arg2 imageURL:(id)arg3 imageType:(long long)arg4;
@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2 imageURL:(id)arg3 imageType:(long long)arg4;

@end
