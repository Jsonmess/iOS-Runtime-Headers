/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class <BBAssertionDelegate>, NSString;

@interface BBAssertion : NSObject  {
    <BBAssertionDelegate> *_delegate;
    NSString *_identifier;
    unsigned int _transactionID;
}


- (id)identifier;
- (void)dealloc;
- (unsigned int)transactionID;
- (void)increaseOrIgnoreTransactionID:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;

@end