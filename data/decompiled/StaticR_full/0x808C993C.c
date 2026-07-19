/* Function at 0x808C993C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808C993C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808C9944
    *(0x14 + r1) = r0; // stw @ 0x808C9948
    r3 = *(0 + r3); // lwz @ 0x808C994C
    r0 = *(0xb74 + r3); // lwz @ 0x808C9950
    if (!=) goto 0x0x808c9974;
    /* lis r3, 0 */ // 0x808C995C
    /* li r4, 2 */ // 0x808C9960
    r3 = *(0 + r3); // lwz @ 0x808C9964
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x808c997c;
    /* li r3, 0 */ // 0x808C9974
    /* b 0x808c99ac */ // 0x808C9978
    /* lis r3, 0 */ // 0x808C997C
    r3 = *(0 + r3); // lwz @ 0x808C9980
    r3 = *(8 + r3); // lwz @ 0x808C9984
    r12 = *(0 + r3); // lwz @ 0x808C9988
    r12 = *(0x24 + r12); // lwz @ 0x808C998C
    /* mtctr r12 */ // 0x808C9990
    /* bctrl  */ // 0x808C9994
    /* lis r3, 0 */ // 0x808C9998
    /* lfs f0, 0(r3) */ // 0x808C999C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x808C99A0
    /* mfcr r3 */ // 0x808C99A4
    /* srwi r3, r3, 0x1f */ // 0x808C99A8
    r0 = *(0x14 + r1); // lwz @ 0x808C99AC
    return;
}