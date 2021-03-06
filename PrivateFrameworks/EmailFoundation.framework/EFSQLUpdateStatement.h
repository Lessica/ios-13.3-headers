/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLUpdateStatement : NSObject <EFSQLUpdateStatementValue> {
    NSMutableDictionary * _bindables;
    unsigned long long  _conflictResolution;
    NSMutableDictionary * _expressables;
    NSString * _table;
    <EFSQLExpressable> * _whereClause;
}

@property (nonatomic, retain) NSMutableDictionary *bindables;
@property (nonatomic, readonly) unsigned long long conflictResolution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *expressables;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *queryString;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *table;
@property (nonatomic, retain) <EFSQLExpressable> *whereClause;

- (void).cxx_destruct;
- (id)_queryStringForUpsert:(bool)arg1;
- (id)bindables;
- (unsigned long long)conflictResolution;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)arg1;
- (id)expressables;
- (id)initWithTable:(id)arg1;
- (id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)queryString;
- (id)queryStringForUpsert;
- (void)setBindables:(id)arg1;
- (void)setExpressables:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setTable:(id)arg1;
- (void)setWhereClause:(id)arg1;
- (id)table;
- (id)whereClause;

@end
