//  Copyright 2021 Nikita Naumov
#ifndef TASK1_H_
#define TASK1_H_

#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <ctime>

void stringBubbleSort(std::vector<std::string>& strVector,
                      std::function<bool(std::string, std::string)> f);

#endif  //  TASK1_H_