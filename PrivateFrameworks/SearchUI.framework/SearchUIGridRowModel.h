/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIGridRowModel : SearchUICardSectionRowModel {
    SearchUIGridLayoutManager * _gridLayoutManager;
    bool  _shouldHide;
}

@property (nonatomic, retain) SearchUIGridLayoutManager *gridLayoutManager;
@property (nonatomic) bool shouldHide;

- (void).cxx_destruct;
- (id)gridLayoutManager;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 gridLayoutManager:(id)arg3 queryId:(unsigned long long)arg4;
- (void)setGridLayoutManager:(id)arg1;
- (void)setShouldHide:(bool)arg1;
- (bool)shouldHide;

@end