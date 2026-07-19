/* Function at 0x808F929C, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_808F929C(int r3, int r4, int r5, int r6)
{
    r6 = *(0x18 + r3); // lwz @ 0x808F929C
    if (>=) goto 0x0x808f92b0;
    /* li r3, -1 */ // 0x808F92A8
    return;
    r0 = *(0x26 + r3); // lbz @ 0x808F92B0
    /* li r3, -1 */ // 0x808F92B4
    r5 = r6 + r0; // 0x808F92B8
    r0 = r5 + -1; // 0x808F92BC
    /* bgtlr  */ // 0x808F92C4
    /* subf r3, r6, r4 */ // 0x808F92C8
    return;
}