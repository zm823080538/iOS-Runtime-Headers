/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageStyler : NSObject {
    int _attributeArrayKind;
    TSWPStorage *_storage;
}

@property (nonatomic, readonly, retain) TSWPStorage *storage;

- (void)applyStyle:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3;
- (id)initWithStorage:(id)arg1 attributeArrayKind:(int)arg2;
- (void)performStylingInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 undoTransaction:(struct TSWPStorageTransaction { }*)arg2;
- (id)replacementStyleForStyle:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)storage;

@end
