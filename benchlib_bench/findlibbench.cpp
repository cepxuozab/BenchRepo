#include "benchmark/benchmark.h"
#include "find.h"

static void BM_Simple(benchmark::State& state) {
  for (auto _ : state) {
    IsPresent("in voluptate velit esse",LoremIpsumStrv);
  }
}

static void BM_BoyerMoore(benchmark::State& state) {
  for (auto _ : state) {
    IsPresentBoyerMoore("in voluptate velit esse",LoremIpsumStrv);
  }
}

BENCHMARK(BM_Simple);
BENCHMARK(BM_BoyerMoore);

BENCHMARK_MAIN();