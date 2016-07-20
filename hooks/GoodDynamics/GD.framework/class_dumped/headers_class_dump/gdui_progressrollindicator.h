//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView;

@interface gdui_progressrollindicator : UIView
{
    UIImageView *_spark;
    NSMutableArray *_wayPoints;
    struct CGPoint _currentPos;
    float _currentAlpha;
    int _index;
    int _alphaDir;
    BOOL _animating;
    struct CGRect _rect;
}

@property(nonatomic) BOOL _animating; // @synthesize _animating;
@property(nonatomic) int _alphaDir; // @synthesize _alphaDir;
@property(nonatomic) int _index; // @synthesize _index;
@property(nonatomic) float _currentAlpha; // @synthesize _currentAlpha;
@property(nonatomic) struct CGPoint _currentPos; // @synthesize _currentPos;
@property(nonatomic) struct CGRect _rect; // @synthesize _rect;
@property(retain, nonatomic) NSMutableArray *_wayPoints; // @synthesize _wayPoints;
@property(retain, nonatomic) UIImageView *_spark; // @synthesize _spark;
- (BOOL)isAccessibilityElement;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
