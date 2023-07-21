
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNOfficialTemplateProposalModuleSpec.h"

@interface OfficialTemplateProposalModule : NSObject <NativeOfficialTemplateProposalModuleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface OfficialTemplateProposalModule : NSObject <RCTBridgeModule>
#endif

@end
