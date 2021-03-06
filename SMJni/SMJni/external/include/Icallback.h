#ifndef _ICALLBACK_H_
#define _ICALLBACK_H_

#include <binder/IInterface.h>

namespace android{

    class Icallback : public IInterface{

        public :
           DECLARE_META_INTERFACE(callback);
           virtual int notifyCallback(int a) = 0;

    };

    class Bncallback : public BnInterface<Icallback>{

      public:
         virtual status_t onTransact(uint32_t code,
                                     const Parcel& data,
                                     Parcel* reply,
                                     uint32_t flags = 0);
    };

}


#endif
