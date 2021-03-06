/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView;

@interface CKTruncatedTextBalloonView : CKTextBalloonView <NSLayoutManagerDelegate> {
    UIImageView *_chevron;
}

@property(retain) UIImageView * chevron;

- (id)chevron;
- (void)configureForMessagePart:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)setChevron:(id)arg1;

@end
