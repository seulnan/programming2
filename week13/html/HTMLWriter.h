#include "DocWriter.h"
#include <iostream>
#include <fstream>

class HTMLWriter : public DocWriter {
public:
    HTMLWriter(const string &fileName, const string &content)
        : DocWriter(fileName, content) {}

    void Write() {
        ofstream outFile(_fileName);
        if (outFile.is_open()) {
            outFile << "<html>\n<head><title>HTMLWriter</title></head>\n";
            outFile << "<body>\n<p>" << _content << "</p>\n";
            outFile << "</body>\n</html>";
            outFile.close();
            cout << "HTML 파일이 저장되었습니다: " << _fileName << endl;
        } else {
            cerr << "파일을 열 수 없습니다: " << _fileName << endl;
        }
    }
};