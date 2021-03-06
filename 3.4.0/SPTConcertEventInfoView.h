//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSString, SPTCalendarView, SPTTheme, UILabel;

@interface SPTConcertEventInfoView : UIView
{
    NSDate *_date;
    SPTTheme *_theme;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SPTCalendarView *_calendarView;
}

@property(retain, nonatomic) SPTCalendarView *calendarView; // @synthesize calendarView=_calendarView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (void)setupCalendarViewWithDate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

