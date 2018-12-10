//
//  GLMUtils.h
//  CastleSim
//
//  Created by Alex Saalberg on 5/2/18.
//

#ifndef GLMUtils_h
#define GLMUtils_h

#include <cstdio>
#include <glm/gtc/type_ptr.hpp>

void printVec3(glm::vec3 v);

void printQuatRotationAsAngles(glm::quat rotation);
void printQuatRotationAsRadians(glm::quat rotation);
float getQuatDegreeRotationAroundX(glm::quat rotation);
glm::vec3 getRotatedNoRotationIdentity(glm::quat rotation);


#endif /* GLMUtils_h */
