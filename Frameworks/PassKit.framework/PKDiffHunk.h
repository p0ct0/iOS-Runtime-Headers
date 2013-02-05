/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString;

@interface PKDiffHunk : NSObject <NSSecureCoding> {
    NSString *_key;
    NSString *_message;
    id _newValue;
    id _oldValue;
}

@property(retain) NSString * key;
@property(retain) NSString * message;
@property(retain) id valueNew;
@property(retain) id valueOld;

+ (id)hunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)message;
- (void)setKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setValueNew:(id)arg1;
- (void)setValueOld:(id)arg1;
- (id)valueNew;
- (id)valueOld;

@end