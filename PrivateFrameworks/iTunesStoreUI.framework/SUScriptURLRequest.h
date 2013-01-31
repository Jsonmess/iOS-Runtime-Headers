/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, SSMutableURLRequestProperties, NSString;

@interface SUScriptURLRequest : SUScriptObject  {
    SSMutableURLRequestProperties *_requestProperties;
}

@property(copy) NSNumber * timeoutInterval;
@property(copy) NSString * URLBagKey;
@property(copy) id URLs;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)copyNativeRequestProperties;
- (id)initWithNativeRequestProperties:(id)arg1;
- (id)URLBagKey;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (id)URLs;
- (void)setURLs:(id)arg1;
- (void)setURLBagKey:(id)arg1;
- (void)setTimeoutInterval:(id)arg1;
- (id)timeoutInterval;

@end