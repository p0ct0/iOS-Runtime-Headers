/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableOrderedSet, NSString;

@interface PLRevGeoRepresentativeNameInfo : NSObject {
    BOOL _addCountyIfNeeded;
    BOOL _allEntriesAtHome;
    BOOL _allEntriesMatchHomeForOrderType;
    NSMutableOrderedSet *_geoPlaces;
    NSString *_localizedName;
    unsigned int _matchingCount;
    NSString *_name;
    NSMutableOrderedSet *_remainingGeoPlaces;
    unsigned int _type;
}

@property BOOL addCountyIfNeeded;
@property BOOL allEntriesAtHome;
@property BOOL allEntriesMatchHomeForOrderType;
@property(readonly) NSMutableOrderedSet * geoPlaces;
@property(copy) NSString * localizedName;
@property unsigned int matchingCount;
@property(copy) NSString * name;
@property(readonly) NSMutableOrderedSet * remainingGeoPlaces;
@property unsigned int type;

- (void)_addResourceKeys:(id)arg1 toTypeMap:(id)arg2 forOrderType:(unsigned int)arg3 countryCode:(id)arg4;
- (BOOL)_administrativeAreaCode:(id)arg1 supportedForOrderType:(unsigned int)arg2;
- (BOOL)_currentLanguageSupportsModifiersForOrderType:(unsigned int)arg1;
- (id)_resourceKeysForOrderType:(unsigned int)arg1 countryCode:(id)arg2 administrativeAreaCode:(id)arg3;
- (id)_typeKeyForOrderType:(unsigned int)arg1 countryCode:(id)arg2;
- (BOOL)addCountyIfNeeded;
- (void)addGeoPlace:(id)arg1;
- (void)addGeoPlaces:(id)arg1;
- (BOOL)allEntriesAtHome;
- (BOOL)allEntriesMatchHomeForOrderType;
- (void)clearGeoPlaces;
- (void)dealloc;
- (id)description;
- (id)geoPlaces;
- (id)init;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2;
- (id)localizedName;
- (unsigned int)matchingCount;
- (id)name;
- (void)prepareRemainingGeoPlaces;
- (id)remainingGeoPlaces;
- (void)removeGeoPlacesFromRemaining:(id)arg1;
- (void)setAddCountyIfNeeded:(BOOL)arg1;
- (void)setAllEntriesAtHome:(BOOL)arg1;
- (void)setAllEntriesMatchHomeForOrderType:(BOOL)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setMatchingCount:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)updateWithAddedNameInfo:(id)arg1;

@end
