#include <iostream>






#include <string>
//
//#include "rtc_base/gunit.h"
#include "rtc_base/net_helpers.h"
#include "rtc_base/ip_address.h"
#include "rtc_base/win32.h"
//
//#if !defined(WEBRTC_WIN)
//#error Only for Windows
//#endif
#include <memory>
#include <string>

#include "absl/memory/memory.h"
#include "rtc_base/event.h"
#include "rtc_base/task_queue_for_test.h"
#include "rtc_base/weak_ptr.h"
#include "test/gtest.h"
#include "rtc_base/time_utils.h"
#include "rtc_base/bind.h"
namespace rtc {

	namespace {

		struct Base {
			std::string member;
		};
		struct Derived : public Base {};

		struct Target {};

		struct Arrow {
			WeakPtr<Target> target;
		};

		struct TargetWithFactory : public Target {
			TargetWithFactory() : factory(this) {}
			WeakPtrFactory<Target> factory;
		};

	}  // namespace
};














int test_main(int argc, char *argv[])
{
	{
		rtc::IPAddress ipv6;
		int data;
		rtc::WeakPtrFactory<int> factory(&data);
		//factory.GetRef();
		rtc::WeakPtr<int> ptr = factory.GetWeakPtr();
		//EXPECT_EQ(&data, ptr.get());
		// Zero compression should be done on the leftmost 0s when there are
		// multiple longest series.
		//rtc::IPFromString("2a00:8a00:a000:1190:0000:0001:000:252", &ipv6);

	}


	
	return EXIT_SUCCESS;
}