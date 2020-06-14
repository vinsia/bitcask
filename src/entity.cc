//
// Created by Vinsia on 2020/5/24.
// Copyright (c) 2020 Vinsia. All rights reserved.

#include "entity.h"

namespace bitcask {

// TODO (vinsia) consider using crc32 to do sanity check.
Entity::Entity(std::string key, std::string value) : key(key), value(value) {
  key_sz = key.length();
  value_sz = value.length();
}
}  // namespace bitcask
