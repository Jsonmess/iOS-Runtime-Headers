/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class AVAudioSession, NSArray, NSString;

@interface _RCMPRoutingController : MPAVRoutingController {
    NSString *_AVAudioSessionCategory;
    NSString *_AVSystemControllerCategory;
    NSString *_activeInputRouteName;
    AVAudioSession *_audioSession;
    NSArray *_cachedRoutes;
    bool_disableRouteChangeNotificationHandling;
    bool_hasCategoryEverBeenActive;
    bool_isCategoryActive;
    bool_needsOutputRoutesFetch;
}

@property(readonly) NSString * AVAudioSessionCategory;
@property(readonly) NSString * AVSystemControllerCategory;
@property(readonly) NSString * activeInputRouteName;
@property(readonly) bool hasCategoryEverBeenActive;
@property(readonly) bool isAudioSessionAppropriateForQueryingInputRoutes;
@property(readonly) bool isAudioSessionAppropriateForQueryingOutputRoutes;
@property(readonly) bool isRoutingToAirPlayMirrorDestination;
@property(readonly) bool isRoutingToPhoneCall;
@property(readonly) bool isTemporarilyIgnoringRouteChangeNotifications;

- (void).cxx_destruct;
- (id)AVAudioSessionCategory;
- (id)AVSystemControllerCategory;
- (void)_configureAudioCategory;
- (bool)_determineIfAudioOutputCategoryIsCurrent;
- (id)activeInputRouteName;
- (void)audioSessionInterruptionNotification:(id)arg1;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)dealloc;
- (void)fetchAvailableRoutesWithCompletionHandler:(id)arg1;
- (bool)hasCategoryEverBeenActive;
- (id)initWithName:(id)arg1;
- (bool)isAudioSessionAppropriateForQueryingInputRoutes;
- (bool)isAudioSessionAppropriateForQueryingOutputRoutes;
- (bool)isCategoryConfiguredForVoiceMemos;
- (bool)isRoutingToAirPlayMirrorDestination;
- (bool)isRoutingToPhoneCall;
- (bool)isTemporarilyIgnoringRouteChangeNotifications;
- (void)makeAudioSessionCategoryActive:(bool)arg1;
- (bool)routeOtherThanHandsetAndSpeakerAvailable;
- (void)routingToAirPlayMirroringDidChangeNotification:(id)arg1;
- (void)setIsCategoryActive:(bool)arg1;

@end