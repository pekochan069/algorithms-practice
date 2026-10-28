#include <cstdlib>
#include <string>
#include <string_view>
#include <print>
#include <functional>
#include <algorithm>
#include <ranges>

auto solution(const std::string_view s) {
    return std::ranges::fold_left(
        s 
        | std::views::pairwise_transform(std::minus{}) 
        | std::views::transform([](auto i) { return std::abs(i); }),
        0,
        std::plus{}
    );
}

int main() {
    const std::string s{"hello"};

    const auto answer = solution(s);

    std::println("{}", answer);

    return 0;
}
