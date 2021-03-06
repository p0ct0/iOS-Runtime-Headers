/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSData;

@interface NSSubrangeData : NSData {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    unsigned int _retainCount : 29;
    unsigned int _reserved : 3;
    NSData *_data;
    } _range;
}

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)getBytes:(void*)arg1;
- (id)init;
- (id)initWithData:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)length;

@end
