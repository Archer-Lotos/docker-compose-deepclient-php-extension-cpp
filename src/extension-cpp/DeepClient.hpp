#pragma once

#include <string>
#include <vector>
#include <map>

class DeepClient {
private:
    std::map<std::string, int> _ids;
    std::map<std::string, std::string> _serialize;

public:
    std::map<std::string, std::string> select(const std::vector<int>& exp, const std::map<std::string, std::string>& options);
    std::map<std::string, std::string> insert(const std::vector<std::string>& objects, const std::map<std::string, std::string>& options);
    std::map<std::string, std::string> update(const std::map<std::string, std::string>& exp, const std::map<std::string, std::string>& value, const std::map<std::string, std::string>& options);
    std::map<std::string, std::string> remove(const std::vector<int>& exp, const std::map<std::string, std::string>& options);
};
