#include "math.hpp"

namespace mbgl {
namespace android {
namespace java {
namespace math {

void registerNative(jni::JNIEnv& env) {
    jni::Class<Math>::Singleton(env);
}

} // namespace util
} // namespace java
} // namespace android
} // namespace mbgl