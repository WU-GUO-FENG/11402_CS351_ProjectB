#include <iostream>
#include <vector>
#include <string>
#include "csv_db.hpp"

int main() {
    std::cout << "=== CSV Mini Database Engine ===" << std::endl;
    
    // 試著解析一個簡單的字串測試檔案（如果有的話）
    std::string test_file = "test_data.csv";
    std::cout << "Loading: " << test_file << " ..." << std::endl;
    
    auto records = CSVParser::parse(test_file);
    std::cout << "Total records loaded (including header): " << records.size() << std::endl;
    
    return 0;
}