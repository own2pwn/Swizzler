/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "KLTitleCell.h"

@class UILabel;

@interface KLTitleAndValueCell : KLTitleCell
{
    UILabel *_valueLabel;
}

- (void)prepareForReuse;
- (void)setupConstraints;
- (void)setupValueLabelDefaultApperance:(id)fp8;
- (void)setupValueLabelApperance:(id)fp8;
- (void)setupTitleLabelApperance:(id)fp8;
- (void)setValue:(id)fp8;
- (void)setupFonts;
- (void)dealloc;
- (void)setupView;

@end
