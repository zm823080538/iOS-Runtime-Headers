/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DChartElementEdgeOverdrawSceneObject, TSCH3DGLFramebuffer, TSCH3DScene;

@interface TSCH3DGeometryAntialiasingSceneRenderPipeline : TSCH3DSceneRenderPipeline <TSCH3DMultipassRenderPipeline> {
    TSCH3DChartElementEdgeOverdrawSceneObject *mGeometry;
    TSCH3DScene *mOverdraw;
    int mPass;
    TSCH3DGLFramebuffer *mRenderingFBO;
}

@property(retain) TSCH3DScene * overdraw;
@property(retain) TSCH3DGLFramebuffer * renderingFBO;

- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;
- (BOOL)multipassRenderingIsDone;
- (id)overdraw;
- (void)releaseResources;
- (BOOL)render;
- (id)renderingFBO;
- (id)renderingFBOResource;
- (void)resetMultipassRendering;
- (void)setFramebuffer:(id)arg1;
- (void)setOverdraw:(id)arg1;
- (void)setRenderingFBO:(id)arg1;
- (void)setScene:(id)arg1;
- (void)skipLowQualityPass;
- (BOOL)updatesTargetFramebuffer;

@end