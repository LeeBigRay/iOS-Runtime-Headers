/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUserInterfaceStatusController : NSObject <ISURLBagObserver, MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _canShowConnect;
    BOOL _canShowRadio;
    BOOL _canShowSubscriptionContent;
    BOOL _displayingLocalLibrary;
    BOOL _hasSuccessfullyLoadedBagOnce;
    BOOL _hasSuccessfullyLoadedProminentRadioStation;
    unsigned int _observersCount;
    MusicSimpleRadioStationInfo *_prominentRadioStationInfo;
    RadioAvailabilityController *_radioAvailabilityController;
    MusicStoreBag *_storeBag;
    NSString *_storeFrontID;
    NSArray *_supportedTabIdentifiers;
    NSDictionary *_tabConfigurations;
    int _tabState;
}

@property (nonatomic, readonly) BOOL canShowConnect;
@property (nonatomic, readonly) BOOL canShowRadio;
@property (nonatomic, readonly) BOOL canShowSubscriptionContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingLocalLibrary, nonatomic, readonly) BOOL displayingLocalLibrary;
@property (nonatomic, readonly) BOOL hasLoadedStoreBagOnce;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MusicSimpleRadioStationInfo *prominentRadioStationInfo;
@property (nonatomic, readonly) RadioAvailabilityController *radioAvailabilityController;
@property (nonatomic, readonly) NSString *storeFrontID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int tabState;

+ (id)sharedUserInterfaceStatusController;

- (void).cxx_destruct;
- (id)_calculateCurrentStoreFrontID;
- (id)_defaultTabConfigurations;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleDefaultLibraryDidDhangeNotification:(id)arg1;
- (void)_handleDefaultsDidChangeNotification:(id)arg1;
- (void)_handleRadioAvailabilityDidChangeNotification:(id)arg1;
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionAvailabilityDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (BOOL)_iOSVersions:(id)arg1 traverseCurrentVersionSinceVersion:(id)arg2;
- (BOOL)_isConnectRestricted;
- (BOOL)_isMusicSubscriptionServiceRestricted;
- (void)_setProminentRadioStationInfo:(id)arg1;
- (void)_updateAllowedUserInterfaceComponents;
- (void)_updateAllowedUserInterfaceComponentsWithStoreBag:(id)arg1;
- (void)_updateAllowedUserInterfaceComponentsWithStoreBagDictionary:(id)arg1;
- (void)_updateProminentRadioStationInfo;
- (void)bagDidChange:(id)arg1;
- (void)beginObservingAllowedUserInterfaceComponents;
- (BOOL)canShowConnect;
- (BOOL)canShowRadio;
- (BOOL)canShowSubscriptionContent;
- (void)dealloc;
- (void)endObservingAllowedUserInterfaceComponents;
- (BOOL)hasLoadedStoreBagOnce;
- (id)init;
- (BOOL)isDisplayingLocalLibrary;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)prominentRadioStationInfo;
- (id)radioAvailabilityController;
- (int)reasonForWelcomScreenPresentation;
- (id)storeFrontID;
- (id)supportedTabIdentifiersForTraitCollection:(id)arg1;
- (int)tabState;
- (void)updateWelcomeScreenAcknowledgmentDefaults:(BOOL)arg1;

@end
