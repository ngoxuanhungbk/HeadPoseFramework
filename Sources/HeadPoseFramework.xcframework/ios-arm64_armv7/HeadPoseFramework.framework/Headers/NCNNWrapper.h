//
//  NCNNWrapper.h
//  HeadPoseFramework
//
//  Created by Hungnx on 10/21/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

FOUNDATION_EXPORT int const HEAD_POSE_NORMAL;
FOUNDATION_EXPORT int const HEAD_POSE_FACE_UP;
FOUNDATION_EXPORT int const HEAD_POSE_FACE_DOWN;
FOUNDATION_EXPORT int const HEAD_POSE_FACE_LEFT;
FOUNDATION_EXPORT int const HEAD_POSE_FACE_RIGHT;
FOUNDATION_EXPORT int const HEAD_POSE_HEAD_SIDE_LEFT;
FOUNDATION_EXPORT int const HEAD_POSE_HEAD_SIDE_RIGHT;
FOUNDATION_EXPORT int const HEAD_POSE_MULTIFACE;

@interface NCNNWrapper : NSObject

- (int)createModel:(NSString*)sessionToken;

- (NSMutableDictionary *)detect:(UIImage *)image;

- (NSString *)generateSesstion:(NSString *)token;

@end
