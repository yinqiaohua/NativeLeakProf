//
// Created by chenwangwang on 2020/12/10.
//

#include "memalign_method.h"
#include "Log.h"
#include "memory_manager.h"

std::stack<void*> memAlignStk;
std::stack<void*> memAlignStkUsed;

void *MyMemAlign1(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign1, boundary, byteCount);
}
void *MyMemAlign2(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign2, boundary, byteCount);
}
void *MyMemAlign3(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign3, boundary, byteCount);
}
void *MyMemAlign4(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign4, boundary, byteCount);
}
void *MyMemAlign5(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign5, boundary, byteCount);
}
void *MyMemAlign6(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign6, boundary, byteCount);
}
void *MyMemAlign7(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign7, boundary, byteCount);
}
void *MyMemAlign8(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign8, boundary, byteCount);
}
void *MyMemAlign9(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign9, boundary, byteCount);
}
void *MyMemAlign10(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign10, boundary, byteCount);
}

void *MyMemAlign11(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign11, boundary, byteCount);
}
void *MyMemAlign12(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign12, boundary, byteCount);
}
void *MyMemAlign13(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign13, boundary, byteCount);
}
void *MyMemAlign14(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign14, boundary, byteCount);
}
void *MyMemAlign15(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign15, boundary, byteCount);
}
void *MyMemAlign16(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign16, boundary, byteCount);
}
void *MyMemAlign17(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign17, boundary, byteCount);
}
void *MyMemAlign18(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign18, boundary, byteCount);
}
void *MyMemAlign19(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign19, boundary, byteCount);
}
void *MyMemAlign20(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign20, boundary, byteCount);
}

void *MyMemAlign21(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign21, boundary, byteCount);
}
void *MyMemAlign22(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign22, boundary, byteCount);
}
void *MyMemAlign23(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign23, boundary, byteCount);
}
void *MyMemAlign24(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign24, boundary, byteCount);
}
void *MyMemAlign25(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign25, boundary, byteCount);
}
void *MyMemAlign26(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign26, boundary, byteCount);
}
void *MyMemAlign27(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign27, boundary, byteCount);
}
void *MyMemAlign28(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign28, boundary, byteCount);
}
void *MyMemAlign29(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign29, boundary, byteCount);
}
void *MyMemAlign30(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign30, boundary, byteCount);
}

void *MyMemAlign31(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign31, boundary, byteCount);
}
void *MyMemAlign32(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign32, boundary, byteCount);
}
void *MyMemAlign33(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign33, boundary, byteCount);
}
void *MyMemAlign34(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign34, boundary, byteCount);
}
void *MyMemAlign35(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign35, boundary, byteCount);
}
void *MyMemAlign36(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign36, boundary, byteCount);
}
void *MyMemAlign37(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign37, boundary, byteCount);
}
void *MyMemAlign38(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign38, boundary, byteCount);
}
void *MyMemAlign39(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign39, boundary, byteCount);
}
void *MyMemAlign40(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign40, boundary, byteCount);
}

void *MyMemAlign41(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign41, boundary, byteCount);
}
void *MyMemAlign42(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign42, boundary, byteCount);
}
void *MyMemAlign43(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign43, boundary, byteCount);
}
void *MyMemAlign44(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign44, boundary, byteCount);
}
void *MyMemAlign45(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign45, boundary, byteCount);
}
void *MyMemAlign46(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign46, boundary, byteCount);
}
void *MyMemAlign47(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign47, boundary, byteCount);
}
void *MyMemAlign48(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign48, boundary, byteCount);
}
void *MyMemAlign49(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign49, boundary, byteCount);
}
void *MyMemAlign50(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign50, boundary, byteCount);
}

void *MyMemAlign51(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign51, boundary, byteCount);
}
void *MyMemAlign52(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign52, boundary, byteCount);
}
void *MyMemAlign53(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign53, boundary, byteCount);
}
void *MyMemAlign54(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign54, boundary, byteCount);
}
void *MyMemAlign55(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign55, boundary, byteCount);
}
void *MyMemAlign56(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign56, boundary, byteCount);
}
void *MyMemAlign57(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign57, boundary, byteCount);
}
void *MyMemAlign58(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign58, boundary, byteCount);
}
void *MyMemAlign59(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign59, boundary, byteCount);
}
void *MyMemAlign60(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign60, boundary, byteCount);
}

void *MyMemAlign61(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign61, boundary, byteCount);
}
void *MyMemAlign62(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign62, boundary, byteCount);
}
void *MyMemAlign63(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign63, boundary, byteCount);
}
void *MyMemAlign64(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign64, boundary, byteCount);
}
void *MyMemAlign65(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign65, boundary, byteCount);
}
void *MyMemAlign66(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign66, boundary, byteCount);
}
void *MyMemAlign67(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign67, boundary, byteCount);
}
void *MyMemAlign68(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign68, boundary, byteCount);
}
void *MyMemAlign69(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign69, boundary, byteCount);
}
void *MyMemAlign70(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign70, boundary, byteCount);
}

void *MyMemAlign71(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign71, boundary, byteCount);
}
void *MyMemAlign72(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign72, boundary, byteCount);
}
void *MyMemAlign73(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign73, boundary, byteCount);
}
void *MyMemAlign74(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign74, boundary, byteCount);
}
void *MyMemAlign75(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign75, boundary, byteCount);
}
void *MyMemAlign76(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign76, boundary, byteCount);
}
void *MyMemAlign77(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign77, boundary, byteCount);
}
void *MyMemAlign78(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign78, boundary, byteCount);
}
void *MyMemAlign79(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign79, boundary, byteCount);
}
void *MyMemAlign80(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign80, boundary, byteCount);
}

void *MyMemAlign81(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign81, boundary, byteCount);
}
void *MyMemAlign82(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign82, boundary, byteCount);
}
void *MyMemAlign83(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign83, boundary, byteCount);
}
void *MyMemAlign84(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign84, boundary, byteCount);
}
void *MyMemAlign85(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign85, boundary, byteCount);
}
void *MyMemAlign86(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign86, boundary, byteCount);
}
void *MyMemAlign87(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign87, boundary, byteCount);
}
void *MyMemAlign88(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign88, boundary, byteCount);
}
void *MyMemAlign89(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign89, boundary, byteCount);
}
void *MyMemAlign90(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign90, boundary, byteCount);
}

void *MyMemAlign91(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign91, boundary, byteCount);
}
void *MyMemAlign92(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign92, boundary, byteCount);
}
void *MyMemAlign93(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign93, boundary, byteCount);
}
void *MyMemAlign94(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign94, boundary, byteCount);
}
void *MyMemAlign95(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign95, boundary, byteCount);
}
void *MyMemAlign96(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign96, boundary, byteCount);
}
void *MyMemAlign97(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign97, boundary, byteCount);
}
void *MyMemAlign98(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign98, boundary, byteCount);
}
void *MyMemAlign99(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign99, boundary, byteCount);
}
void *MyMemAlign100(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign100, boundary, byteCount);
}

void *MyMemAlign101(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign101, boundary, byteCount);
}
void *MyMemAlign102(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign102, boundary, byteCount);
}
void *MyMemAlign103(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign103, boundary, byteCount);
}
void *MyMemAlign104(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign104, boundary, byteCount);
}
void *MyMemAlign105(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign105, boundary, byteCount);
}
void *MyMemAlign106(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign106, boundary, byteCount);
}
void *MyMemAlign107(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign107, boundary, byteCount);
}
void *MyMemAlign108(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign108, boundary, byteCount);
}
void *MyMemAlign109(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign109, boundary, byteCount);
}
void *MyMemAlign110(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign110, boundary, byteCount);
}

void *MyMemAlign111(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign111, boundary, byteCount);
}
void *MyMemAlign112(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign112, boundary, byteCount);
}
void *MyMemAlign113(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign113, boundary, byteCount);
}
void *MyMemAlign114(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign114, boundary, byteCount);
}
void *MyMemAlign115(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign115, boundary, byteCount);
}
void *MyMemAlign116(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign116, boundary, byteCount);
}
void *MyMemAlign117(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign117, boundary, byteCount);
}
void *MyMemAlign118(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign118, boundary, byteCount);
}
void *MyMemAlign119(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign119, boundary, byteCount);
}
void *MyMemAlign120(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign120, boundary, byteCount);
}

void *MyMemAlign121(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign121, boundary, byteCount);
}
void *MyMemAlign122(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign122, boundary, byteCount);
}
void *MyMemAlign123(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign123, boundary, byteCount);
}
void *MyMemAlign124(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign124, boundary, byteCount);
}
void *MyMemAlign125(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign125, boundary, byteCount);
}
void *MyMemAlign126(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign126, boundary, byteCount);
}
void *MyMemAlign127(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign127, boundary, byteCount);
}
void *MyMemAlign128(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign128, boundary, byteCount);
}
void *MyMemAlign129(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign129, boundary, byteCount);
}
void *MyMemAlign130(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign130, boundary, byteCount);
}

void *MyMemAlign131(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign131, boundary, byteCount);
}
void *MyMemAlign132(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign132, boundary, byteCount);
}
void *MyMemAlign133(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign133, boundary, byteCount);
}
void *MyMemAlign134(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign134, boundary, byteCount);
}
void *MyMemAlign135(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign135, boundary, byteCount);
}
void *MyMemAlign136(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign136, boundary, byteCount);
}
void *MyMemAlign137(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign137, boundary, byteCount);
}
void *MyMemAlign138(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign138, boundary, byteCount);
}
void *MyMemAlign139(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign139, boundary, byteCount);
}
void *MyMemAlign140(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign140, boundary, byteCount);
}

void *MyMemAlign141(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign141, boundary, byteCount);
}
void *MyMemAlign142(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign142, boundary, byteCount);
}
void *MyMemAlign143(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign143, boundary, byteCount);
}
void *MyMemAlign144(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign144, boundary, byteCount);
}
void *MyMemAlign145(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign145, boundary, byteCount);
}
void *MyMemAlign146(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign146, boundary, byteCount);
}
void *MyMemAlign147(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign147, boundary, byteCount);
}
void *MyMemAlign148(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign148, boundary, byteCount);
}
void *MyMemAlign149(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign149, boundary, byteCount);
}
void *MyMemAlign150(size_t boundary, size_t byteCount) {
    return nlp::invokeMemAlign((void *) MyMemAlign150, boundary, byteCount);
}

void* popMemAlignMethod(std::string &libName) {
    void *method = (void*) memAlignStk.top();
    memAlignStk.pop();
    memAlignStkUsed.push(method);
    return method;
}

void resetMemAlignMethod() {
    while (!memAlignStkUsed.empty()) {
        memAlignStk.push(memAlignStkUsed.top());
        memAlignStkUsed.pop();
    }
}

void initDiyMemAlignMethod() {
    memAlignStk.push((void *) MyMemAlign1);
    memAlignStk.push((void *) MyMemAlign2);
    memAlignStk.push((void *) MyMemAlign3);
    memAlignStk.push((void *) MyMemAlign4);
    memAlignStk.push((void *) MyMemAlign5);
    memAlignStk.push((void *) MyMemAlign6);
    memAlignStk.push((void *) MyMemAlign7);
    memAlignStk.push((void *) MyMemAlign8);
    memAlignStk.push((void *) MyMemAlign9);
    memAlignStk.push((void *) MyMemAlign10);

    memAlignStk.push((void *) MyMemAlign11);
    memAlignStk.push((void *) MyMemAlign12);
    memAlignStk.push((void *) MyMemAlign13);
    memAlignStk.push((void *) MyMemAlign14);
    memAlignStk.push((void *) MyMemAlign15);
    memAlignStk.push((void *) MyMemAlign16);
    memAlignStk.push((void *) MyMemAlign17);
    memAlignStk.push((void *) MyMemAlign18);
    memAlignStk.push((void *) MyMemAlign19);
    memAlignStk.push((void *) MyMemAlign20);

    memAlignStk.push((void *) MyMemAlign21);
    memAlignStk.push((void *) MyMemAlign22);
    memAlignStk.push((void *) MyMemAlign23);
    memAlignStk.push((void *) MyMemAlign24);
    memAlignStk.push((void *) MyMemAlign25);
    memAlignStk.push((void *) MyMemAlign26);
    memAlignStk.push((void *) MyMemAlign27);
    memAlignStk.push((void *) MyMemAlign28);
    memAlignStk.push((void *) MyMemAlign29);
    memAlignStk.push((void *) MyMemAlign30);

    memAlignStk.push((void *) MyMemAlign31);
    memAlignStk.push((void *) MyMemAlign32);
    memAlignStk.push((void *) MyMemAlign33);
    memAlignStk.push((void *) MyMemAlign34);
    memAlignStk.push((void *) MyMemAlign35);
    memAlignStk.push((void *) MyMemAlign36);
    memAlignStk.push((void *) MyMemAlign37);
    memAlignStk.push((void *) MyMemAlign38);
    memAlignStk.push((void *) MyMemAlign39);
    memAlignStk.push((void *) MyMemAlign40);

    memAlignStk.push((void *) MyMemAlign41);
    memAlignStk.push((void *) MyMemAlign42);
    memAlignStk.push((void *) MyMemAlign43);
    memAlignStk.push((void *) MyMemAlign44);
    memAlignStk.push((void *) MyMemAlign45);
    memAlignStk.push((void *) MyMemAlign46);
    memAlignStk.push((void *) MyMemAlign47);
    memAlignStk.push((void *) MyMemAlign48);
    memAlignStk.push((void *) MyMemAlign49);
    memAlignStk.push((void *) MyMemAlign50);

    memAlignStk.push((void *) MyMemAlign51);
    memAlignStk.push((void *) MyMemAlign52);
    memAlignStk.push((void *) MyMemAlign53);
    memAlignStk.push((void *) MyMemAlign54);
    memAlignStk.push((void *) MyMemAlign55);
    memAlignStk.push((void *) MyMemAlign56);
    memAlignStk.push((void *) MyMemAlign57);
    memAlignStk.push((void *) MyMemAlign58);
    memAlignStk.push((void *) MyMemAlign59);
    memAlignStk.push((void *) MyMemAlign60);

    memAlignStk.push((void *) MyMemAlign61);
    memAlignStk.push((void *) MyMemAlign62);
    memAlignStk.push((void *) MyMemAlign63);
    memAlignStk.push((void *) MyMemAlign64);
    memAlignStk.push((void *) MyMemAlign65);
    memAlignStk.push((void *) MyMemAlign66);
    memAlignStk.push((void *) MyMemAlign67);
    memAlignStk.push((void *) MyMemAlign68);
    memAlignStk.push((void *) MyMemAlign69);
    memAlignStk.push((void *) MyMemAlign70);

    memAlignStk.push((void *) MyMemAlign71);
    memAlignStk.push((void *) MyMemAlign72);
    memAlignStk.push((void *) MyMemAlign73);
    memAlignStk.push((void *) MyMemAlign74);
    memAlignStk.push((void *) MyMemAlign75);
    memAlignStk.push((void *) MyMemAlign76);
    memAlignStk.push((void *) MyMemAlign77);
    memAlignStk.push((void *) MyMemAlign78);
    memAlignStk.push((void *) MyMemAlign79);
    memAlignStk.push((void *) MyMemAlign80);

    memAlignStk.push((void *) MyMemAlign81);
    memAlignStk.push((void *) MyMemAlign82);
    memAlignStk.push((void *) MyMemAlign83);
    memAlignStk.push((void *) MyMemAlign84);
    memAlignStk.push((void *) MyMemAlign85);
    memAlignStk.push((void *) MyMemAlign86);
    memAlignStk.push((void *) MyMemAlign87);
    memAlignStk.push((void *) MyMemAlign88);
    memAlignStk.push((void *) MyMemAlign89);
    memAlignStk.push((void *) MyMemAlign90);

    memAlignStk.push((void *) MyMemAlign91);
    memAlignStk.push((void *) MyMemAlign92);
    memAlignStk.push((void *) MyMemAlign93);
    memAlignStk.push((void *) MyMemAlign94);
    memAlignStk.push((void *) MyMemAlign95);
    memAlignStk.push((void *) MyMemAlign96);
    memAlignStk.push((void *) MyMemAlign97);
    memAlignStk.push((void *) MyMemAlign98);
    memAlignStk.push((void *) MyMemAlign99);
    memAlignStk.push((void *) MyMemAlign100);

    memAlignStk.push((void *) MyMemAlign101);
    memAlignStk.push((void *) MyMemAlign102);
    memAlignStk.push((void *) MyMemAlign103);
    memAlignStk.push((void *) MyMemAlign104);
    memAlignStk.push((void *) MyMemAlign105);
    memAlignStk.push((void *) MyMemAlign106);
    memAlignStk.push((void *) MyMemAlign107);
    memAlignStk.push((void *) MyMemAlign108);
    memAlignStk.push((void *) MyMemAlign109);
    memAlignStk.push((void *) MyMemAlign110);

    memAlignStk.push((void *) MyMemAlign111);
    memAlignStk.push((void *) MyMemAlign112);
    memAlignStk.push((void *) MyMemAlign113);
    memAlignStk.push((void *) MyMemAlign114);
    memAlignStk.push((void *) MyMemAlign115);
    memAlignStk.push((void *) MyMemAlign116);
    memAlignStk.push((void *) MyMemAlign117);
    memAlignStk.push((void *) MyMemAlign118);
    memAlignStk.push((void *) MyMemAlign119);
    memAlignStk.push((void *) MyMemAlign120);

    memAlignStk.push((void *) MyMemAlign121);
    memAlignStk.push((void *) MyMemAlign122);
    memAlignStk.push((void *) MyMemAlign123);
    memAlignStk.push((void *) MyMemAlign124);
    memAlignStk.push((void *) MyMemAlign125);
    memAlignStk.push((void *) MyMemAlign126);
    memAlignStk.push((void *) MyMemAlign127);
    memAlignStk.push((void *) MyMemAlign128);
    memAlignStk.push((void *) MyMemAlign129);
    memAlignStk.push((void *) MyMemAlign130);

    memAlignStk.push((void *) MyMemAlign131);
    memAlignStk.push((void *) MyMemAlign132);
    memAlignStk.push((void *) MyMemAlign133);
    memAlignStk.push((void *) MyMemAlign134);
    memAlignStk.push((void *) MyMemAlign135);
    memAlignStk.push((void *) MyMemAlign136);
    memAlignStk.push((void *) MyMemAlign137);
    memAlignStk.push((void *) MyMemAlign138);
    memAlignStk.push((void *) MyMemAlign139);
    memAlignStk.push((void *) MyMemAlign140);

    memAlignStk.push((void *) MyMemAlign141);
    memAlignStk.push((void *) MyMemAlign142);
    memAlignStk.push((void *) MyMemAlign143);
    memAlignStk.push((void *) MyMemAlign144);
    memAlignStk.push((void *) MyMemAlign145);
    memAlignStk.push((void *) MyMemAlign146);
    memAlignStk.push((void *) MyMemAlign147);
    memAlignStk.push((void *) MyMemAlign148);
    memAlignStk.push((void *) MyMemAlign149);
    memAlignStk.push((void *) MyMemAlign150);
}
