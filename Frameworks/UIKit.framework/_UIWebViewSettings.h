/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying> {
    BOOL _allowsInlineMediaPlayback;
    NSString *_customUserAgent;
    unsigned int _dataDetectorTypes;
    BOOL _mediaPlaybackAllowsAirPlay;
    BOOL _mediaPlaybackRequiresUserAction;
    BOOL _suppressesIncrementalRendering;
}

@property BOOL allowsInlineMediaPlayback;
@property(copy) NSString * customUserAgent;
@property unsigned int dataDetectorTypes;
@property BOOL mediaPlaybackAllowsAirPlay;
@property BOOL mediaPlaybackRequiresUserAction;
@property BOOL suppressesIncrementalRendering;

+ (id)defaultSettings;

- (id)_encodeAsDictionary;
- (id)_initWithDictionary:(id)arg1;
- (BOOL)allowsInlineMediaPlayback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customUserAgent;
- (unsigned int)dataDetectorTypes;
- (void)dealloc;
- (id)init;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)mediaPlaybackRequiresUserAction;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (void)setSuppressesIncrementalRendering:(BOOL)arg1;
- (BOOL)suppressesIncrementalRendering;

@end
