//
// Created by Vinsia on 2020/5/24.
// Copyright (c) 2020 Vinsia. All rights reserved.

#include "entity.h"

#include "gtest/gtest.h"

namespace bitcask {
TEST(EntityTest, Construct) {
  std::string key = "key";
  std::string value = "value";
  Entity entity = Entity(key, value);
  ASSERT_EQ(key, entity.key);
  ASSERT_EQ(value, entity.value);
  ASSERT_EQ(3, entity.key_sz);
  ASSERT_EQ(5, entity.value_sz);
}
}  // namespace bitcask

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
