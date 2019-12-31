/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArchivedCellSelection : TSPObject <TSKArchivedSelection> {
    TSTCellSelection * _cellSelection;
    bool  _isLegacyBasedIDSelection;
    struct TSUCellCoord { 
        unsigned int row; 
        unsigned short column; 
        bool _preserveRow; 
        bool _preserveColumn; 
    }  _legacyAnchorCellID;
    TSTCellRegion * _legacyBaseCellRegion;
    TSTCellRegion * _legacyCellRegion;
    struct TSUCellCoord { 
        unsigned int row; 
        unsigned short column; 
        bool _preserveRow; 
        bool _preserveColumn; 
    }  _legacyCursorCellID;
    long long  _selectionType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSKSelection *selection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (id)selectionWithParent:(id)arg1;
- (void)setSelection:(id)arg1;

@end