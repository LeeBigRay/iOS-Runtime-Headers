/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWInterface : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_interface> *_internalInterface;
}

@property (readonly) NWInterface *delegateInterface;
@property (getter=isEligibleForCrazyIvan46, readonly) BOOL eligibleForCrazyIvan46;
@property (getter=isExpensive, readonly) BOOL expensive;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) NSString *interfaceName;
@property (retain) NSObject<OS_nw_interface> *internalInterface;
@property (readonly) int mtu;
@property unsigned long long nwiFlags;
@property (getter=isPersistent, readonly) BOOL persistent;
@property (readonly, copy) NSString *privateDescription;
@property BOOL prohibitOpportunistic;
@property (getter=isRanked) BOOL ranked;
@property (retain) NSArray *scopedDNSNameServers;
@property (readonly) NSArray *scopedDNSNameServersAsStrings;
@property (retain) NSArray *scopedDNSSearchDomains;
@property (readonly) int subtype;
@property (readonly) BOOL supportsDNS;
@property (readonly) BOOL supportsIPv4;
@property (readonly) BOOL supportsIPv6;
@property (readonly) int type;
@property (readonly) NSString *typeString;

+ (id)descriptionForSubtype:(int)arg1;
+ (id)descriptionForType:(int)arg1;
+ (void)registerCreateBlocksForIndex:(id /* block */)arg1 andName:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)delegateInterface;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (BOOL)hasNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (id)initWithInterface:(id)arg1;
- (id)initWithInterfaceIndex:(unsigned int)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (unsigned int)interfaceIndex;
- (id)interfaceName;
- (id)internalInterface;
- (BOOL)isDeepEqual:(id)arg1;
- (BOOL)isEligibleForCrazyIvan46;
- (BOOL)isExpensive;
- (BOOL)isPersistent;
- (BOOL)isRanked;
- (BOOL)isShallowEqual:(id)arg1;
- (int)mtu;
- (unsigned long long)nwiFlags;
- (id)privateDescription;
- (BOOL)prohibitOpportunistic;
- (id)scopedDNSNameServers;
- (id)scopedDNSNameServersAsStrings;
- (id)scopedDNSSearchDomains;
- (void)setInternalInterface:(id)arg1;
- (void)setNwiFlags:(unsigned long long)arg1;
- (void)setProhibitOpportunistic:(BOOL)arg1;
- (void)setRanked:(BOOL)arg1;
- (void)setScopedDNSNameServers:(id)arg1;
- (void)setScopedDNSSearchDomains:(id)arg1;
- (int)subtype;
- (BOOL)supportsDNS;
- (BOOL)supportsIPv4;
- (BOOL)supportsIPv6;
- (int)type;
- (id)typeString;

@end
