// Decompiled from StaticR.rel
// Address: 0x80589440
// Size: 64 bytes (16 instructions)
// Stack frame: 0x0010
// Calls: 0x8057da5c, 0x80591498

void sub_80589440(r3 /* param */) {
    // stwu r1, -0x10(r1)
    // mflr r0
    // stw r0, 0x14(r1)
    // stw r31, 0xc(r1)
    r31 = r3; // mr
    sub_0x8057da5c();
    r3 = r31; // mr
    sub_0x80591498();
    r0 = /* load */ r0, 0x14(r3); // lwz
    // xori r0, r0, 0x80
    // stw r0, 0x14(r3)
    r31 = /* load */ r31, 0xc(r1); // lwz
    // lwz r0, 0x14(r1)
    // mtlr r0
    // addi r1, r1, 0x10
}
