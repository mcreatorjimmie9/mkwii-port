/* Function at 0x808FBE0C, size=228 bytes */
/* Stack frame: 0 bytes */

int FUN_808FBE0C(int r3, int r4, int r5, int r6, int r7)
{
    r5 = *(0x304 + r3); // lwz @ 0x808FBE0C
    r0 = r5 + 1; // 0x808FBE10
    /* clrlwi r0, r0, 0x1c */ // 0x808FBE14
    *(0x304 + r3) = r0; // stw @ 0x808FBE18
    /* mulli r0, r0, 0x18 */ // 0x808FBE1C
    r5 = r3 + r0; // 0x808FBE20
    *(0x184 + r5) = r4; // stb @ 0x808FBE24
    r4 = *(0x168 + r3); // lwz @ 0x808FBE28
    r0 = *(0x15c + r3); // lwz @ 0x808FBE2C
    r6 = r4 + 1; // 0x808FBE30
    r5 = *(0x304 + r3); // lwz @ 0x808FBE34
    /* subfc r4, r0, r6 */ // 0x808FBE38
    r0 = *(0x164 + r3); // lwz @ 0x808FBE3C
    /* subfe r4, r4, r4 */ // 0x808FBE40
    r6 = r6 & r4; // 0x808FBE44
    /* mulli r5, r5, 0x18 */ // 0x808FBE48
    r4 = r3 + r5; // 0x808FBE50
    r7 = r4 + 0x184; // 0x808FBE54
    /* beqlr  */ // 0x808FBE58
    r4 = *(0x160 + r3); // lwz @ 0x808FBE5C
    /* slwi r0, r6, 4 */ // 0x808FBE60
    *(0x168 + r3) = r6; // stw @ 0x808FBE64
    /* li r6, 7 */ // 0x808FBE68
    /* li r5, -1 */ // 0x808FBE6C
    /* stwx r6, r4, r0 */ // 0x808FBE70
    r0 = *(0x168 + r3); // lwz @ 0x808FBE74
    r4 = *(0x160 + r3); // lwz @ 0x808FBE78
    /* slwi r0, r0, 4 */ // 0x808FBE7C
    r4 = r4 + r0; // 0x808FBE80
    *(4 + r4) = r7; // stw @ 0x808FBE84
    r0 = *(0x168 + r3); // lwz @ 0x808FBE88
    r4 = *(0x160 + r3); // lwz @ 0x808FBE8C
    /* slwi r0, r0, 4 */ // 0x808FBE90
    r4 = r4 + r0; // 0x808FBE94
    *(8 + r4) = r5; // stw @ 0x808FBE98
    r0 = *(0x168 + r3); // lwz @ 0x808FBE9C
    r4 = *(0x160 + r3); // lwz @ 0x808FBEA0
    /* slwi r0, r0, 4 */ // 0x808FBEA4
    r5 = *(0x15c + r3); // lwz @ 0x808FBEA8
    r4 = r4 + r0; // 0x808FBEAC
    *(0xc + r4) = r5; // stw @ 0x808FBEB0
    r4 = *(0x164 + r3); // lwz @ 0x808FBEB4
    /* b 0x808fbee0 */ // 0x808FBEB8
    r5 = *(0x160 + r3); // lwz @ 0x808FBEBC
    /* slwi r0, r4, 4 */ // 0x808FBEC0
    r4 = r4 + 1; // 0x808FBEC4
    r5 = r5 + r0; // 0x808FBEC8
    *(0xc + r5) = r6; // stw @ 0x808FBECC
    r0 = *(0x15c + r3); // lwz @ 0x808FBED0
    /* subfc r0, r0, r4 */ // 0x808FBED4
    /* subfe r0, r0, r0 */ // 0x808FBED8
    r4 = r4 & r0; // 0x808FBEDC
    r6 = *(0x168 + r3); // lwz @ 0x808FBEE0
    if (!=) goto 0x0x808fbebc;
    return;
}