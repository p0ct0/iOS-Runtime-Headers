/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLSkyProgram : VGLProgram {
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _baseColor;
    } _color;
    } _horizon;
    } _horizonColor;
    float _screenHeight;
    float _skyStartOffset;
    int _uColor;
    int _uHorizon;
    int _uScreenHeight;
    int _uSkyStartOffset;
}

@property struct _VGLColor { float x1; float x2; float x3; float x4; } color;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } horizon;
@property float screenHeight;
@property float skyStartOffset;

+ (id)fragName;
+ (id)vertName;

- (id).cxx_construct;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })color;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })horizon;
- (float)screenHeight;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setHorizon:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setScreenHeight:(float)arg1;
- (void)setSkyStartOffset:(float)arg1;
- (void)setup;
- (float)skyStartOffset;

@end
