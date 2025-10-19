#include "pch.h"
#include "Min_sum.h"


TEST(MinSum, OneHeight) {
	const std::vector<std::vector<int>> triangle1{ {1} };
	EXPECT_EQ(minSum(triangle1), 1);

	const std::vector<std::vector<int>> triangle2{ {-1} };
	EXPECT_EQ(minSum(triangle2), -1);
}

TEST(MinSum, TwoHeight) {
	const std::vector<std::vector<int>> triangle1{ {1}, {1, 2} };
	EXPECT_EQ(minSum(triangle1), 2);

	const std::vector<std::vector<int>> triangle2{ {-1}, {2, -3} };
	EXPECT_EQ(minSum(triangle2), -4);
}

TEST(MinSum, ThreeHeight) {
	const std::vector<std::vector<int>> triangle1{ {1}, {1, 2}, {-1, 0, 1} };
	EXPECT_EQ(minSum(triangle1), 1);

	const std::vector<std::vector<int>> triangle2{ {-1}, {2, -3}, {-5, 1, 2} };
	EXPECT_EQ(minSum(triangle2), -4);
}

TEST(MinSum, FourHeight) {
	const std::vector<std::vector<int>> triangle1{ {2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3} };
	EXPECT_EQ(minSum(triangle1), 11);

	const std::vector<std::vector<int>> triangle2{ {-1}, {2, 3}, {1, -1, -3}, {4, 2, 1, 3} };
	EXPECT_EQ(minSum(triangle2), 0);
}