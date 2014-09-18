/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSData, NSDate, NSDictionary, NSString, NSURL;

@interface IMFileTransfer : NSObject {
    NSString *_accountID;
    unsigned long long _averageTransferRate;
    NSDate *_createdDate;
    unsigned long long _currentBytes;
    long long _error;
    NSString *_errorDescription;
    NSString *_filename;
    NSString *_guid;
    unsigned int _hfsCreator;
    unsigned short _hfsFlags;
    unsigned int _hfsType;
    unsigned long long _lastAveragedBytes;
    double _lastAveragedInterval;
    double _lastUpdatedInterval;
    NSData *_localBookmark;
    NSURL *_localURL;
    NSDictionary *_localUserInfo;
    NSString *_messageGUID;
    NSString *_mimeType;
    NSString *_otherPerson;
    NSDate *_startDate;
    unsigned long long _totalBytes;
    NSDictionary *_transcoderUserInfo;
    NSURL *_transferDataURL;
    long long _transferState;
    NSString *_transferredFilename;
    NSString *_utiType;
    bool_isDirectory;
    bool_isIncoming;
    bool_needsWrapper;
    bool_shouldAttemptToResume;
    bool_shouldForceArchive;
    bool_wasRegisteredAsStandalone;
}

@property(readonly) unsigned long long _lastAveragedBytes;
@property(setter=_setLastAveragedInterval:) double _lastAveragedInterval;
@property(setter=_setLastUpdatedInterval:) double _lastUpdatedInterval;
@property(setter=_setNeedsWrapper:) bool _needsWrapper;
@property(retain) NSString * accountID;
@property unsigned long long averageTransferRate;
@property(readonly) bool canBeAccepted;
@property(retain) NSDate * createdDate;
@property unsigned long long currentBytes;
@property(retain,readonly) NSString * displayName;
@property long long error;
@property(retain) NSString * errorDescription;
@property(readonly) bool existsAtLocalPath;
@property(retain) NSString * filename;
@property(retain) NSString * guid;
@property unsigned int hfsCreator;
@property unsigned short hfsFlags;
@property unsigned int hfsType;
@property bool isDirectory;
@property(readonly) bool isFinished;
@property bool isIncoming;
@property(retain) NSData * localBookmark;
@property(retain) NSString * localPath;
@property(retain) NSURL * localURL;
@property(retain,readonly) NSURL * localURLWithoutBookmarkResolution;
@property(retain) NSString * messageGUID;
@property(retain,readonly) NSString * mimeType;
@property(retain) NSString * otherPerson;
@property bool shouldAttemptToResume;
@property bool shouldForceArchive;
@property(retain) NSDate * startDate;
@property unsigned long long totalBytes;
@property(retain) NSDictionary * transcoderUserInfo;
@property(retain) NSURL * transferDataURL;
@property long long transferState;
@property(retain) NSString * transferredFilename;
@property(retain) NSString * type;
@property(retain) NSDictionary * userInfo;
@property(setter=setRegisteredAsStandalone:) bool wasRegisteredAsStandalone;

+ (bool)_doesLocalURLRequireArchiving:(id)arg1;
+ (id)_invalidCharactersForFileTransferName;

- (void)_calculateTypeInformation;
- (void)_clear;
- (id)_dictionaryRepresentation;
- (id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(bool)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned int)arg8 hfsCreator:(unsigned int)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(bool)arg11;
- (unsigned long long)_lastAveragedBytes;
- (double)_lastAveragedInterval;
- (double)_lastUpdatedInterval;
- (bool)_needsWrapper;
- (void)_setAccount:(id)arg1 otherPerson:(id)arg2;
- (void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3;
- (void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2;
- (void)_setDirectory:(bool)arg1 hfsType:(unsigned int)arg2 hfsCreator:(unsigned int)arg3 hfsFlags:(unsigned short)arg4;
- (void)_setError:(long long)arg1;
- (void)_setErrorDescription:(id)arg1;
- (void)_setForceArchive:(bool)arg1;
- (void)_setLastAveragedInterval:(double)arg1;
- (void)_setLastUpdatedInterval:(double)arg1;
- (void)_setLocalPath:(id)arg1;
- (void)_setLocalURL:(id)arg1;
- (void)_setNeedsWrapper:(bool)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setTransferDataURL:(id)arg1;
- (void)_setTransferState:(long long)arg1;
- (bool)_updateWithDictionaryRepresentation:(id)arg1;
- (id)accountID;
- (unsigned long long)averageTransferRate;
- (bool)canBeAccepted;
- (id)createdDate;
- (unsigned long long)currentBytes;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (long long)error;
- (id)errorDescription;
- (bool)existsAtLocalPath;
- (id)filename;
- (id)guid;
- (unsigned int)hfsCreator;
- (unsigned short)hfsFlags;
- (unsigned int)hfsType;
- (id)init;
- (bool)isDirectory;
- (bool)isFinished;
- (bool)isIncoming;
- (id)localBookmark;
- (id)localPath;
- (id)localURL;
- (id)localURLWithoutBookmarkResolution;
- (id)messageGUID;
- (id)mimeType;
- (id)otherPerson;
- (void)setAccountID:(id)arg1;
- (void)setAverageTransferRate:(unsigned long long)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setCurrentBytes:(unsigned long long)arg1;
- (void)setFilename:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHfsCreator:(unsigned int)arg1;
- (void)setHfsFlags:(unsigned short)arg1;
- (void)setHfsType:(unsigned int)arg1;
- (void)setIsDirectory:(bool)arg1;
- (void)setIsIncoming:(bool)arg1;
- (void)setLocalBookmark:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setOtherPerson:(id)arg1;
- (void)setRegisteredAsStandalone:(bool)arg1;
- (void)setShouldAttemptToResume:(bool)arg1;
- (void)setTotalBytes:(unsigned long long)arg1;
- (void)setTranscoderUserInfo:(id)arg1;
- (void)setTransferredFilename:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAttemptToResume;
- (bool)shouldForceArchive;
- (id)startDate;
- (unsigned long long)totalBytes;
- (id)transcoderUserInfo;
- (id)transferDataURL;
- (long long)transferState;
- (id)transferredFilename;
- (id)type;
- (id)userInfo;
- (bool)wasRegisteredAsStandalone;

@end