// Decompiled from StaticR.rel
// Address: 0x8058eda8
// Size: 224 bytes (56 instructions)
// Stack frame: 0x0010
// Calls: 0x80555bf4, 0x80555bf4, 0x8058d40c, 0x8058ca68, 0x80555bf4, 0x80555bf4, 0x8058d4e0, 0x8058989c

void sub_8058eda8(r3 /* param */, r4 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    r4 = (uint32_t)0 << 16; // lis
    // stw r0, 0x14(r1)
    r0 = 0; // li
    // stw r31, 0xc(r1)
    // stw r30, 8(r1)
    r30 = r3; // mr
    // stw r0, 0x58(r3)
    // stw r0, 0x5c(r3)
    r0 = /* load */ r0, 0(r4); // lbz
    // cmpwi r0, 0
    L_8058ee20:
    r3 = 0x5c; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r31 = r3; // mr
    L_8058ee18:
    r3 = 0x28; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r4 = r3; // mr
    L_8058ee0c:
    sub_0x8058d40c();
    r4 = r3; // mr
    r3 = r31; // mr
    sub_0x8058ca68();
    r31 = r3; // mr
    // stw r31, 0x58(r30)
    goto L_8058ee70;
    r3 = (uint32_t)0 << 16; // lis
    r0 = /* load */ r0, 0(r3); // lbz
    // cmpwi r0, 0
    L_8058ee70:
    r3 = 0xb4; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r31 = r3; // mr
    L_8058ee6c:
    r3 = 0x28; // li
    sub_0x80555bf4();
    // cmpwi r3, 0
    r4 = r3; // mr
    L_8058ee60:
    sub_0x8058d4e0();
    r4 = r3; // mr
    r3 = r31; // mr
    sub_0x8058989c();
    r31 = r3; // mr
    // stw r31, 0x5c(r30)
    // lwz r0, 0x14(r1)
    r31 = /* load */ r31, 0xc(r1); // lwz
    r30 = /* load */ r30, 8(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x10
}
