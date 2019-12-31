/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAGalleryLayout : TSDDrawableLayout <TSWPColumnMetrics, TSWPLayoutParent> {
    TSUBezierPath * _cachedPathForClippingConnectionLines;
    NSArray * _captionLayouts;
    NSMapTable * _captionLayoutsForItems;
    TSAGalleryItem * _currentItem;
    TSWPLayout * _galleryCaptionLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageContainerRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRectInImageContainer;
    bool  _isInvalidatingSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pageControlBoundingRect;
}

@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (nonatomic, readonly) TSWPLayout *currentCaptionLayout;
@property (nonatomic, retain) TSAGalleryItem *currentItem;
@property (nonatomic, readonly) TSDLayoutGeometry *imageContainerGeometry;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageContainerRect;
@property (nonatomic, readonly) TSDLayoutGeometry *imageGeometry;
@property (nonatomic, readonly) TSDLayoutGeometry *imageGeometryInRoot;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRect;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pageControlBoundingRect;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (nonatomic, readonly) double textScaleFactor;

+ (double)p_constrainedImageContainerHeightForHeight:(double)arg1;
+ (double)p_constrainedImageContainerWidthForWidth:(double)arg1 maxLayoutWidth:(double)arg2;

- (void).cxx_destruct;
- (id)additionalGuides;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (bool)alwaysStartsNewTarget;
- (unsigned long long)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (struct CGPoint { double x1; double x2; })calculateOffsetForGalleryItem:(id)arg1 withFacesRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)children;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (id)currentCaptionLayout;
- (id)currentItem;
- (void)dealloc;
- (id)dependentsOfTextLayout:(id)arg1;
- (bool)descendersCannotClip;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)imageContainerGeometry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageContainerRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameInRootWithDragOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)imageGeometry;
- (id)imageGeometryInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectInImageContainerForItem:(id)arg1;
- (id)infoGeometryForFittingInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithInfo:(id)arg1;
- (id)interiorClippingPath;
- (void)invalidateExteriorWrap;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidateSize;
- (id)layoutMargins;
- (struct CGSize { double x1; double x2; })minimumSize;
- (bool)needsToValidateChildrenForInlineLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)p_galleryInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_imageRectInImageContainerForItem:(id)arg1 dragOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)p_invalidateOwningAttachmentSize;
- (struct CGSize { double x1; double x2; })p_maxLayoutSize;
- (double)p_minScaleForItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageControlBoundingRect;
- (id)pathForClippingConnectionLines;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (void)setCurrentItem:(id)arg1;
- (bool)shrinkTextToFit;
- (void)updateChildrenFromInfo;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end