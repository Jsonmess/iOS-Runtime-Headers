/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, SAPersonAttribute;

@interface SAPhoneCall : SADomainCommand {
}

@property(retain) SAPersonAttribute * callRecipient;
@property(copy) NSNumber * emergencyCall;
@property bool faceTime;
@property bool faceTimeAudio;

+ (id)call;
+ (id)callWithDictionary:(id)arg1 context:(id)arg2;

- (id)callRecipient;
- (id)emergencyCall;
- (id)encodedClassName;
- (bool)faceTime;
- (bool)faceTimeAudio;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCallRecipient:(id)arg1;
- (void)setEmergencyCall:(id)arg1;
- (void)setFaceTime:(bool)arg1;
- (void)setFaceTimeAudio:(bool)arg1;

@end