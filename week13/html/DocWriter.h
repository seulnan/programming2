#include <string>
using namespace std;

class DocWriter{
public:
    DocWriter();
    DocWriter(const string &fileName, const string &content);
    virtual ~DocWriter();

    // 파일 이름을 지정
    void SetFileName(const string &fileName);

    // 저장할 텍스트를 지정
    void SetContent(const string &content);

    virtual void Write();
    
    protected:
        string _fileName;
        string _content;
};