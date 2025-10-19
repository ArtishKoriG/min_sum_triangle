#pragma once
#include <iostream>
#include <vector>


int minSum(const std::vector<std::vector<int>>& triangle) {
	auto height = triangle.size();
	auto sum = triangle[height - 1];
	for (auto i = static_cast<int>(height) - 2; i >= 0; i--) {
		std::vector<int> cur(triangle[i].size(), 0);
		for (auto j = 0; j < triangle[i].size(); j++) {
			if (sum[j] < sum[j + 1]) {
				cur[j] = sum[j] + triangle[i][j];
			}
			else {
				cur[j] = sum[j + 1] + triangle[i][j];
			}
		}
		sum = cur;
	}
	return sum[0];
}