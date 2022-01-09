#include "Sample.h"

#include <atomic>
#include <future>
#include <iostream>

static std::atomic<int> counter(0);

static int increment()
{
    for (int i = 0; i < 1000000000; i++)
    {
        ++counter;
    }

    return counter;
}

void execute()
{
    // 例１（実行を遅延しない場合）
    auto task1_1 = std::async(std::launch::async, increment);
    auto task1_2 = std::async(std::launch::async, increment);

    std::cout << task1_1.get() << std::endl;
    std::cout << task1_2.get() << std::endl;

    // カウンタをリセット
    counter = 0;

    // 例２（実行を遅延する場合）
    auto task2_1 = std::async(std::launch::async | std::launch::deferred, increment);
    auto task2_2 = std::async(std::launch::async | std::launch::deferred, increment);

    std::cout << task2_1.get() << std::endl;
    std::cout << task2_2.get() << std::endl;
}
