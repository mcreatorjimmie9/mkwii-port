/* Function at 0x80698D34, size=68 bytes */
/* Stack frame: 0 bytes */

void FUN_80698D34(int r3, int r4)
{
    r0 = *(0x30 + r3); // lwz @ 0x80698D34
    if (==) goto 0x0x80698d4c;
    if (==) goto 0x0x80698d60;
    return;
    /* li r0, 1 */ // 0x80698D4C
    *(0x30 + r3) = r0; // stw @ 0x80698D50
    *(0x1c + r3) = r4; // stw @ 0x80698D54
    *(0x28 + r3) = r5; // stw @ 0x80698D58
    return;
    r0 = *(0x1c + r3); // lwz @ 0x80698D60
    /* bgelr  */ // 0x80698D68
    *(0x1c + r3) = r4; // stw @ 0x80698D6C
    *(0x28 + r3) = r5; // stw @ 0x80698D70
    return;
}