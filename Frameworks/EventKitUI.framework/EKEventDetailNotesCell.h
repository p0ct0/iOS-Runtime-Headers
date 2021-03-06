/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel, UITextView;

@interface EKEventDetailNotesCell : EKEventDetailCell {
    BOOL _isTruncatingNotes;
    UILabel *_notesTitleView;
    UITextView *_notesView;
}

@property(readonly) BOOL isTruncatingNotes;

- (void).cxx_destruct;
- (id)_notesTitleView;
- (id)_notesView;
- (struct CGSize { float x1; float x2; })_truncatedNotesViewSize:(float)arg1;
- (BOOL)isTruncatingNotes;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (BOOL)update;

@end
