/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_Cluster_PROXY_BASE_HPP_
#define V1_COMMONAPI_Cluster_PROXY_BASE_HPP_

#include <v1/commonapi/Cluster.hpp>



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <vector>

#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Event.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

class ClusterProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::ObservableReadonlyAttribute<bool> ErrrorCheckAttribute;
    typedef CommonAPI::Event<
        int32_t
    > ErrorBroadcastEvent;


    virtual ErrrorCheckAttribute& getErrrorCheckAttribute() = 0;
    /**
     * @invariant Fire And Forget
     */
    virtual void sendImage1(std::vector< uint8_t > _image1, CommonAPI::CallStatus &_internalCallStatus) = 0;
    /**
     * @invariant Fire And Forget
     */
    virtual void sendImage2(std::vector< uint8_t > _image2, CommonAPI::CallStatus &_internalCallStatus) = 0;
    /**
     * @invariant Fire And Forget
     */
    virtual void sendImage3(std::vector< uint8_t > _image3, CommonAPI::CallStatus &_internalCallStatus) = 0;
    /**
     * @invariant Fire And Forget
     */
    virtual void sendImage4(std::vector< uint8_t > _image4, CommonAPI::CallStatus &_internalCallStatus) = 0;
    virtual ErrorBroadcastEvent& getErrorBroadcastEvent() = 0;

    virtual std::future<void> getCompletionFuture() = 0;
};

} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_Cluster_PROXY_BASE_HPP_
