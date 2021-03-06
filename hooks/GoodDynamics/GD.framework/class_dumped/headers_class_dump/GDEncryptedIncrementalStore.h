//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSIncrementalStore.h"

@class GDStoreSQLAdapter, GDStoreSQLMapping, NSDictionary, NSMutableArray;

@interface GDEncryptedIncrementalStore : NSIncrementalStore
{
    struct sqlite3 *m_eisDb;
    int m_version;
    NSMutableArray *m_errors;
    BOOL m_shouldUpgrade;
    BOOL m_runAnalyzeOnOpen;
    BOOL m_runVacuumOnOpen;
    NSDictionary *m_runPragmasOnOpen;
    NSDictionary *m_options;
    id <GDStoreSQLStatementsDescriptor> m_storeDescriptor;
    GDStoreSQLAdapter *m_adapter;
    GDStoreSQLMapping *m_mapper;
}

- (id)databaseError;
- (BOOL)upgradeStore:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (BOOL)migrateStore:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (id)modelURLUsedForStoreNamed:(id)arg1 bundle:(id)arg2 metadata:(id)arg3;
- (id)modelFromURL:(id)arg1;
- (id)URLForModel:(id)arg1 bundle:(id)arg2 version:(id)arg3;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (BOOL)loadMetadata:(id *)arg1;
- (BOOL)shouldUpgrade;
- (id)executeSaveRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)prepareTables;
- (BOOL)createTables:(id *)arg1;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (void)unmountSQL;
- (void)mountSQL;

@end

