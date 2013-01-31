/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCurrentTimeMarkerView, UIView, UIColor, NSTimer, NSMutableArray;

@interface EKDayGridView : UIView  {
    float _timeInset;
    float _hourHeight;
    float _timeWidth;
    unsigned int _leftBorder : 1;
    unsigned int _rightBorder : 1;
    unsigned int _showsTimeMarker : 1;
    unsigned int _showsTimeLine : 1;
    int _selected;
    float _fixedDayWidth;
    int _orientation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastBounds;
    BOOL _rightBorderInsetsOccurrences;
    UIColor *_backgroundColor;
    UIView *_leftBorderView;
    NSMutableArray *_middleBorderViews;
    UIView *_rightBorderView;
    UIView *_topGrayView;
    UIView *_bottomGrayView;
    UIView *_topPattern;
    UIView *_bottomPattern;
    unsigned int _daysToDisplay;
    EKCurrentTimeMarkerView *_timeMarker;
    NSTimer *_timeMarkerTimer;
    int _hoursToPadTop;
    int _hoursToPadBottom;
    BOOL _drawsGrayOutsideExtents;
}

@property BOOL showsLeftBorder;
@property BOOL showsRightBorder;
@property BOOL rightBorderInsetsOccurrences;
@property BOOL showsTimeLine;
@property BOOL showsTimeMarker;
@property float fixedDayWidth;
@property int hoursToPadTop;
@property int hoursToPadBottom;
@property BOOL drawsGrayOutsideExtents;
@property(getter=isSelected) BOOL selected;
@property(readonly) float timeWidth;
@property(readonly) float timeInset;
@property(readonly) float widthForOccurrences;

+ (void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2;
+ (id)cachedBackgroundImageForKey:(id)arg1;

- (void)dealloc;
- (void)setOrientation:(int)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)topPadding;
- (BOOL)drawsGrayOutsideExtents;
- (void)setHoursToPadBottom:(int)arg1;
- (int)hoursToPadBottom;
- (void)setHoursToPadTop:(int)arg1;
- (int)hoursToPadTop;
- (void)setRightBorderInsetsOccurrences:(BOOL)arg1;
- (BOOL)rightBorderInsetsOccurrences;
- (float)fixedDayWidth;
- (void)setFixedDayWidth:(float)arg1;
- (int)secondAtPosition:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForStartSeconds:(int)arg1 endSeconds:(int)arg2;
- (void)setDrawsGrayOutsideExtents:(BOOL)arg1;
- (BOOL)showsRightBorder;
- (void)setShowsRightBorder:(BOOL)arg1;
- (BOOL)showsLeftBorder;
- (BOOL)showsTimeMarker;
- (void)setShowsTimeMarker:(BOOL)arg1;
- (BOOL)showsTimeLine;
- (void)setShowsTimeLine:(BOOL)arg1;
- (float)timeInset;
- (float)widthForOccurrences;
- (float)_dayWidth;
- (id)_generateGridImage;
- (float)hourHeight;
- (void)_updateTimeMarker;
- (void)_setMarkerTimer;
- (float)positionOfSecond:(int)arg1;
- (float)timeWidth;
- (void)updateMarkerPosition;
- (void)_invalidateMarkerTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 opaque:(BOOL)arg3 numberOfDaysToDisplay:(unsigned int)arg4;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (float)bottomPadding;

@end