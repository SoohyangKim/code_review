#include "priority_queue.h"
#include <gtest/gtest.h>


// TEST(testCaseName, testName){
//   ... test body ...
// }


TEST(PriorityQueueTest,Trivial){
	templatePriorityQueue<int> expTarget;

	//Test 1 - Initalize
	ASSERT_TRUE(expTarget.empty()); // empty test
	ASSERT_EQ(expTarget.size(), 0);

	//Test 2 - Push Datas and Top size
	expTarget.push(1);
	expTarget.push(4);
	expTarget.push(2);
	expTarget.push(3);
	expTarget.push(8);
	expTarget.push(5);
	
	ASSERT_EQ(expTarget.size(),6); // Pushed 6 elements
	ASSERT_EQ(expTarget.top(),8);  // The highest pushed value is 8
	ASSERT_FALSE(expTarget.empty()); // it must not empty

	//Test 3 - push/pop test

	expTarget.pop();
	ASSERT_EQ(expTarget.top(), 5);
	ASSERT_EQ(expTarget.size(), 5);

	expTarget.pop();
	ASSERT_EQ(expTarget.top(), 4);
	ASSERT_EQ(expTarget.size(), 4);

	expTarget.push(7);
	ASSERT_EQ(expTarget.top(), 7);
	ASSERT_EQ(expTarget.size(), 5);

	expTarget.pop();
	ASSERT_EQ(expTarget.top(), 7);
	ASSERT_EQ(expTarget.size(), 4);

	expTarget.push(2);
	ASSERT_EQ(expTarget.top(), 4);
	ASSERT_EQ(expTarget.size(), 5);


	expTarget.pop();	
	ASSERT_EQ(expTarget.top(),3);
	ASSERT_EQ(expTarget.size(),4);

	expTarget.pop();
	ASSERT_EQ(expTarget.top(), 2);
	ASSERT_EQ(expTarget.size(), 3);

	ASSERT_FALSE(expTarget.empty());

	expTarget.pop();
	ASSERT_EQ(expTarget.top(), 2);
	ASSERT_EQ(expTarget.size(), 2);

	expTarget.pop();
	ASSERT_EQ(expTarget.top(), 1);
	ASSERT_EQ(expTarget.size(), 1);

	expTarget.pop();	
	ASSERT_TRUE(expTarget.empty());
	
	/* Fail Example - If you activate this code, Test will be fail *

	expTarget.pop();
	
	EXPECT_TRUE(expTarget.empty()); // non-Fatal Failure - not terminate this test case when result of empty method is false.
	ASSERT_EQ(expTarget.size(),0);
        /**/
	
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
