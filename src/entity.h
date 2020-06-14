//
// Created by Vinsia on 2020/5/24.
// Copyright (c) 2020 Vinsia. All rights reserved.


#ifndef BITCASK_ENTITY_H
#define BITCASK_ENTITY_H

#endif  // BITCASK_ENTITY_H

#include <cstdint>
#include <string>

namespace bitcask {
class Entity {
 public:
  int32_t crc;
  int32_t tstamp;
  int32_t key_sz;
  int32_t value_sz;
  std::string key;
  std::string value;

  Entity(std::string key, std::string value);
  virtual ~Entity() = default;
};
}  // namespace bitcask
