//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, SPTNewMusicTuesdayElementModel, UIImage;

@interface SPTNewMusicTuesdayElementViewModel : NSObject
{
    BOOL _contentValid;
    NSString *_elementTitle;
    NSString *_elementSubtitle;
    NSString *_elementDescription;
    UIImage *_elementImage;
    NSURL *_elementImageURI;
    NSURL *_elementURI;
    NSString *_elementListenActionButtonTitle;
    NSString *_elementShareActionButtonTitle;
    SPTNewMusicTuesdayElementModel *_elementModel;
    NSArray *_viewModelObservations;
    int _elementNumberOfTracks;
}

@property(nonatomic) int elementNumberOfTracks; // @synthesize elementNumberOfTracks=_elementNumberOfTracks;
@property(readonly, nonatomic) NSArray *viewModelObservations; // @synthesize viewModelObservations=_viewModelObservations;
@property(retain, nonatomic) SPTNewMusicTuesdayElementModel *elementModel; // @synthesize elementModel=_elementModel;
@property(copy, nonatomic) NSString *elementShareActionButtonTitle; // @synthesize elementShareActionButtonTitle=_elementShareActionButtonTitle;
@property(copy, nonatomic) NSString *elementListenActionButtonTitle; // @synthesize elementListenActionButtonTitle=_elementListenActionButtonTitle;
@property(copy, nonatomic) NSURL *elementURI; // @synthesize elementURI=_elementURI;
@property(copy, nonatomic) NSURL *elementImageURI; // @synthesize elementImageURI=_elementImageURI;
@property(retain, nonatomic) UIImage *elementImage; // @synthesize elementImage=_elementImage;
@property(copy, nonatomic) NSString *elementDescription; // @synthesize elementDescription=_elementDescription;
@property(copy, nonatomic) NSString *elementSubtitle; // @synthesize elementSubtitle=_elementSubtitle;
@property(copy, nonatomic) NSString *elementTitle; // @synthesize elementTitle=_elementTitle;
@property(nonatomic, getter=isContentValid) BOOL contentValid; // @synthesize contentValid=_contentValid;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (BOOL)isObjectValid:(id)arg1;
- (BOOL)isStringValid:(id)arg1;
- (BOOL)isContentValidCheck;
- (void)synchElementData;
- (id)initWithElementModel:(id)arg1;

@end
