/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GMMDateTime, NSMutableArray, NSString;

@interface GMMStep : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    NSMutableArray *_alertIndexs;
    NSString *_arrivalAddress;
    GMMDateTime *_arrivalDateTime;
    NSString *_departureAddress;
    GMMDateTime *_departureDateTime;
    NSInteger _departureIntervalSeconds;
    NSInteger _departurePointIndex;
    NSString *_direction;
    NSInteger _distanceMeters;
    NSInteger _durationSeconds;
    BOOL _hasDepartureIntervalSeconds;
    BOOL _hasDeparturePointIndex;
    BOOL _hasDistanceMeters;
    BOOL _hasDurationSeconds;
    BOOL _hasIconId;
    BOOL _hasShowInInstructions;
    BOOL _hasStepType;
    BOOL _hasTransitAgencyIndex;
    long long _iconId;
    NSString *_iconSummaryText;
    NSString *_instructions;
    NSMutableArray *_notices;
    BOOL _showInInstructions;
    NSInteger _stepType;
    NSString *_streetViewPanoId;
    NSInteger _transitAgencyIndex;
}

@property(retain) NSMutableArray *notices; /* unknown property attribute: V_notices */
@property(retain) NSMutableArray *alertIndexs; /* unknown property attribute: V_alertIndexs */
@property(retain) NSString *streetViewPanoId; /* unknown property attribute: V_streetViewPanoId */
@property BOOL hasTransitAgencyIndex; /* unknown property attribute: V_hasTransitAgencyIndex */
@property NSInteger transitAgencyIndex; /* unknown property attribute: V_transitAgencyIndex */
@property BOOL hasShowInInstructions; /* unknown property attribute: V_hasShowInInstructions */
@property BOOL showInInstructions; /* unknown property attribute: V_showInInstructions */
@property(retain) NSString *iconSummaryText; /* unknown property attribute: V_iconSummaryText */
@property BOOL hasIconId; /* unknown property attribute: V_hasIconId */
@property long long iconId; /* unknown property attribute: V_iconId */
@property(retain) NSString *direction; /* unknown property attribute: V_direction */
@property BOOL hasDepartureIntervalSeconds; /* unknown property attribute: V_hasDepartureIntervalSeconds */
@property NSInteger departureIntervalSeconds; /* unknown property attribute: V_departureIntervalSeconds */
@property(retain) GMMDateTime *arrivalDateTime; /* unknown property attribute: V_arrivalDateTime */
@property(retain) GMMDateTime *departureDateTime; /* unknown property attribute: V_departureDateTime */
@property(retain) NSString *arrivalAddress; /* unknown property attribute: V_arrivalAddress */
@property(retain) NSString *departureAddress; /* unknown property attribute: V_departureAddress */
@property BOOL hasDeparturePointIndex; /* unknown property attribute: V_hasDeparturePointIndex */
@property NSInteger departurePointIndex; /* unknown property attribute: V_departurePointIndex */
@property BOOL hasDurationSeconds; /* unknown property attribute: V_hasDurationSeconds */
@property NSInteger durationSeconds; /* unknown property attribute: V_durationSeconds */
@property BOOL hasDistanceMeters; /* unknown property attribute: V_hasDistanceMeters */
@property NSInteger distanceMeters; /* unknown property attribute: V_distanceMeters */
@property(retain) NSString *instructions; /* unknown property attribute: V_instructions */
@property BOOL hasStepType; /* unknown property attribute: V_hasStepType */
@property NSInteger stepType; /* unknown property attribute: V_stepType */
@property(readonly) NSInteger alertIndexsCount;
@property(readonly) BOOL hasArrivalAddress;
@property(readonly) BOOL hasArrivalDateTime;
@property(readonly) BOOL hasDepartureAddress;
@property(readonly) BOOL hasDepartureDateTime;
@property(readonly) BOOL hasDirection;
@property(readonly) BOOL hasIconSummaryText;
@property(readonly) BOOL hasInstructions;
@property(readonly) BOOL hasStreetViewPanoId;
@property(readonly) NSInteger noticesCount;

- (void)addAlertIndex:(NSInteger)arg1;
- (void)addNotice:(id)arg1;
- (NSInteger)alertIndexAtIndex:(NSUInteger)arg1;
- (id)alertIndexs;
- (NSInteger)alertIndexsCount;
- (id)arrivalAddress;
- (id)arrivalDateTime;
- (void)dealloc;
- (id)departureAddress;
- (id)departureDateTime;
- (NSInteger)departureIntervalSeconds;
- (NSInteger)departurePointIndex;
- (id)description;
- (id)direction;
- (NSInteger)distanceMeters;
- (NSInteger)durationSeconds;
- (BOOL)hasArrivalAddress;
- (BOOL)hasArrivalDateTime;
- (BOOL)hasDepartureAddress;
- (BOOL)hasDepartureDateTime;
- (BOOL)hasDepartureIntervalSeconds;
- (BOOL)hasDeparturePointIndex;
- (BOOL)hasDirection;
- (BOOL)hasDistanceMeters;
- (BOOL)hasDurationSeconds;
- (BOOL)hasIconId;
- (BOOL)hasIconSummaryText;
- (BOOL)hasInstructions;
- (BOOL)hasShowInInstructions;
- (BOOL)hasStepType;
- (BOOL)hasStreetViewPanoId;
- (BOOL)hasTransitAgencyIndex;
- (long long)iconId;
- (id)iconSummaryText;
- (id)init;
- (id)instructions;
- (id)noticeAtIndex:(NSUInteger)arg1;
- (id)notices;
- (NSInteger)noticesCount;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (void)setAlertIndex:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setAlertIndexs:(id)arg1;
- (void)setArrivalAddress:(id)arg1;
- (void)setArrivalDateTime:(id)arg1;
- (void)setDepartureAddress:(id)arg1;
- (void)setDepartureDateTime:(id)arg1;
- (void)setDepartureIntervalSeconds:(NSInteger)arg1;
- (void)setDeparturePointIndex:(NSInteger)arg1;
- (void)setDirection:(id)arg1;
- (void)setDistanceMeters:(NSInteger)arg1;
- (void)setDurationSeconds:(NSInteger)arg1;
- (void)setHasDepartureIntervalSeconds:(BOOL)arg1;
- (void)setHasDeparturePointIndex:(BOOL)arg1;
- (void)setHasDistanceMeters:(BOOL)arg1;
- (void)setHasDurationSeconds:(BOOL)arg1;
- (void)setHasIconId:(BOOL)arg1;
- (void)setHasShowInInstructions:(BOOL)arg1;
- (void)setHasStepType:(BOOL)arg1;
- (void)setHasTransitAgencyIndex:(BOOL)arg1;
- (void)setIconId:(long long)arg1;
- (void)setIconSummaryText:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setNotice:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setNotices:(id)arg1;
- (void)setShowInInstructions:(BOOL)arg1;
- (void)setStepType:(NSInteger)arg1;
- (void)setStreetViewPanoId:(id)arg1;
- (void)setTransitAgencyIndex:(NSInteger)arg1;
- (BOOL)showInInstructions;
- (NSInteger)stepType;
- (id)streetViewPanoId;
- (NSInteger)transitAgencyIndex;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end