/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : NSObject  {
    BOOL _isDetectingDisplays;
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_iteratorDict;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDetector;
+ (void)initialize;

- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)init;
- (id)autorelease;
- (void)stopDetectingDisplays;
- (void)detectDisplays;
- (BOOL)isAutoDetectEnabled;

@end