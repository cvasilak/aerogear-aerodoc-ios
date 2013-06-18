//  ProDoctorAPIClient.h
//
//  Generated by the the JBoss AeroGear Xcode Project Template on 6/17/13.
//  See Project's web site for more details http://www.aerogear.org
//

#import "AeroGear.h"

@interface ProDoctorAPIClient : NSObject

// the pipes for this service
@property(readonly, nonatomic) id<AGPipe> tasksPipe;
// ...add your own pipes

+ (ProDoctorAPIClient *)sharedInstance;

- (void)loginWithUsername:(NSString *)username
                 password:(NSString *)password
                  success:(void (^)())success
                  failure:(void (^)(NSError *error))failure;
@end
