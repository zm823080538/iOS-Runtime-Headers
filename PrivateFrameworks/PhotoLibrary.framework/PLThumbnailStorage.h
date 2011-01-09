/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;



@interface PLThumbnailStorage : NSObject 
{
    NSString *_path;
    NSInteger _entryWidth;
    NSInteger _entryHeight;
    NSInteger _entryRowBytes;
    NSInteger _entryByteSize;
    NSInteger _fid;
    NSInteger _entryCount;
    char *_bytes;
    NSInteger _additionalSegmentsCount;
    char **_additionalSegments;
    char **_additionalSegmentsMapped;
}

@property(getter=entryByteSize,readonly) NSInteger _entryByteSize;
@property(getter=entryRowBytes,readonly) NSInteger _entryRowBytes;
@property(getter=entryHeight,readonly) NSInteger _entryHeight;
@property(getter=entryWidth,readonly) NSInteger _entryWidth;
@property(getter=path,readonly) NSString *_path;

+ (struct CGSize { float x1; float x2; })scaleSize:(struct CGSize { float x1; float x2; })arg1 toBeAtLeastSize:(struct CGSize { float x1; float x2; })arg2 scaleUp:(BOOL)arg3;
+ (struct CGImage { }*)createImageFromImage:(struct CGImage { }*)arg1 centeredInSize:(struct CGSize { float x1; float x2; })arg2;
+ (struct CGImage { }*)createImageFromImage:(struct CGImage { }*)arg1 rotatedByDegrees:(NSInteger)arg2;
+ (struct CGImage { }*)createImageFromImage:(struct CGImage { }*)arg1 withMaxiumDimension:(NSInteger)arg2 rotatedByDegrees:(NSInteger)arg3;
+ (struct CGContext { }*)createScaledImageContext:(struct CGImage { }*)arg1 scaledToMaximumSize:(struct CGSize { float x1; float x2; })arg2 center:(BOOL)arg3;
+ (id)thumbDataForImage:(struct CGImage { }*)arg1 thumbSize:(struct CGSize { float x1; float x2; })arg2 padThumb:(BOOL)arg3 dither:(BOOL)arg4 bytesPerRow:(NSInteger*)arg5 width:(NSInteger*)arg6 height:(NSInteger*)arg7 accessoryLayer:(id)arg8;
+ (id)thumbDataForImage:(struct CGImage { }*)arg1 thumbSize:(struct CGSize { float x1; float x2; })arg2 padThumb:(BOOL)arg3 dither:(BOOL)arg4 bytesPerRow:(NSInteger*)arg5 width:(NSInteger*)arg6 height:(NSInteger*)arg7;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scaleSize:(struct CGSize { float x1; float x2; })arg1 toFitWithinSize:(struct CGSize { float x1; float x2; })arg2;
+ (struct CGImage { }*)createImageFromImage:(struct CGImage { }*)arg1 scaledToSize:(struct CGSize { float x1; float x2; })arg2;
+ (struct CGImage { }*)createImageFromImage:(struct CGImage { }*)arg1 croppedToSize:(struct CGSize { float x1; float x2; })arg2 withWhiteInsert:(NSInteger)arg3;

- (const char *)entryAtIndex:(NSInteger)arg1;
- (void)setEntryAtIndex:(NSInteger)arg1 bytes:(const void*)arg2;
- (struct CGSize { float x1; float x2; })entrySize;
- (void)rotateEntryAtIndex:(NSInteger)arg1 byDegrees:(NSInteger)arg2 withWhiteInsert:(NSInteger)arg3;
- (NSInteger)entryByteSize;
- (NSInteger)entryRowBytes;
- (NSInteger)entryHeight;
- (NSInteger)entryWidth;
- (id)initWithPath:(id)arg1 dimensions:(struct CGSize { float x1; float x2; })arg2;
- (NSInteger)addEntries;
- (id)dataForImage:(struct CGImage { }*)arg1 dither:(BOOL)arg2 duration:(id)arg3;
- (void)setEntryAtIndex:(NSInteger)arg1 data:(id)arg2;
- (NSInteger)entryCount;
- (id)dataEntryAtIndex:(NSInteger)arg1;
- (id)path;
- (void)dealloc;

@end