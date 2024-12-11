#include "DocWriter.h"
#include "HTMLWriter.h"

int main(){

    HTMLWriter hw("test.html", "this is html");

    DocWriter *pw = &hw;

    pw->Write();

    return 0;
}
