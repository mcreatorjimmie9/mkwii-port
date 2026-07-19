/* Function at 0x805E78D8, size=88 bytes */
/* Stack frame: 0 bytes */

void FUN_805E78D8(int r3, int r4, int r5)
{
    r0 = *(0x38 + r3); // lhz @ 0x805E78D8
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x805E78DC
    /* bnelr  */ // 0x805E78E0
    r4 = *(0x1c + r3); // lwz @ 0x805E78E4
    /* li r0, 1 */ // 0x805E78E8
    r4 = *(0x10 + r4); // lwz @ 0x805E78EC
    r5 = *(4 + r4); // lwz @ 0x805E78F0
    if (==) goto 0x0x805e7908;
    if (==) goto 0x0x805e7908;
    /* li r0, 0 */ // 0x805E7904
    if (==) goto 0x0x805e7918;
    r4 = *(0 + r4); // lwz @ 0x805E7910
    /* b 0x805e791c */ // 0x805E7914
    /* li r4, 0 */ // 0x805E7918
    r0 = *(0x38 + r3); // lhz @ 0x805E791C
    *(0x20 + r3) = r4; // stw @ 0x805E7920
    r0 = r0 | 0x400; // 0x805E7924
    *(0x38 + r3) = r0; // sth @ 0x805E7928
    return;
}