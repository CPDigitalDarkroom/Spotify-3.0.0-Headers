//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface SPTCellImageLoadingContext : NSObject
{
    id <SPTCellImageLoadingContextCompatibleCell> _cell;
    NSIndexPath *_indexPath;
}

+ (id)contextForCell:(id)arg1 indexPath:(id)arg2;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <SPTCellImageLoadingContextCompatibleCell> cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (_Bool)collectionViewIndexPathIsValid:(id)arg1;
- (void)setImage:(id)arg1 forCellInCollectionView:(id)arg2 animated:(_Bool)arg3;
- (void)setImage:(id)arg1 forCellInCollectionView:(id)arg2;
- (_Bool)tableViewIndexPathIsValid:(id)arg1;
- (void)setImage:(id)arg1 forCellInTableView:(id)arg2 animated:(_Bool)arg3;
- (void)setImage:(id)arg1 forCellInTableView:(id)arg2;

@end

