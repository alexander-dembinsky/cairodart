#include "utils.h"

namespace cairodart
{

namespace infrastructure
{

Utils::Utils()
{
}

void Utils::propagateError(const Dart_Handle& handle)
{
    if (Dart_IsError(handle))
    {
        Dart_PropagateError(handle);
    }
}

void Utils::newError(const std::string& msg)
{
    Dart_NewApiError(msg.c_str());
}

bool Utils::isString(const Dart_Handle& handle)
{
    return Dart_IsString(handle);
}

bool Utils::isInteger(const Dart_Handle& handle)
{
    return Dart_IsInteger(handle);
}

bool Utils::isDouble(const Dart_Handle& handle)
{
    return Dart_IsDouble(handle);
}

bool Utils::isBoolean(const Dart_Handle& handle)
{
    return Dart_IsBoolean(handle);
}

std::string Utils::toString(const Dart_Handle& handle)
{
    const char* buff;
    propagateError(Dart_StringToCString(handle, &buff));
    return std::string(buff);
}

double Utils::toDouble(const Dart_Handle &handle)
{
    double num;
    propagateError(Dart_DoubleValue(handle, &num));
    return num;
}

bool Utils::toBoolean(const Dart_Handle &handle)
{
    bool val;
    propagateError(Dart_BooleanValue(handle, &val));
    return val;
}

} // infrastructure

} // cairodart